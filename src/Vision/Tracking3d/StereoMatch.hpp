//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: PGonçalves                                                       *
//***************************************************************************

#ifndef VISION_TRACKING3D_STEREOMATCH_HPP_INCLUDED_
#define VISION_TRACKING3D_STEREOMATCH_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <unistd.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;
using namespace cv;

namespace Vision
{
  namespace Tracking3d
  {
    class StereoMatch
    {
        struct coordImage
        {
            int x;
            int y;
        };

        struct realCoord
        {
            float x;
            float y;
            float z;
        };

      public:
        StereoMatch(DUNE::Tasks::Task* task) :
        m_task(task)
        {}

        void
        loadParametersForStereo(std::vector<double> m_intrinsicCam1, std::vector<double> m_distortionCam1, std::vector<double> m_intrinsicCam2,
                                std::vector<double> m_distortionCam2, std::vector<double> positionPixelsX1, std::vector<double> positionPixelsY1,
                                std::vector<double> positionPixelsX2, std::vector<double> positionPixelsY2, std::vector<double> positionMetersX,
                                std::vector<double> positionMetersY, std::vector<double> positionMetersZ)
        {
          CvMat *intrinsicCam1 = cvCreateMat(3, 3, CV_32FC1);
          CvMat *distortionCam1 = cvCreateMat(1, 5, CV_32FC1);
          CvMat *intrinsicCam2 = cvCreateMat(3, 3, CV_32FC1);
          CvMat *distortionCam2 = cvCreateMat(1, 5, CV_32FC1);

          unsigned int c = 0;
          while (c < 9)
          {
            intrinsicCam1->data.fl[c] = m_intrinsicCam1[c];
            intrinsicCam2->data.fl[c] = m_intrinsicCam2[c];
            if (c < 5)
            {
              distortionCam1->data.fl[c] = m_distortionCam1[c];
              distortionCam2->data.fl[c] = m_distortionCam2[c];
            }
            c++;
          }
          vector<int> npoints;
          std::vector<CvPoint3D32f> objectPoints;
          std::vector<CvPoint2D32f> camaraPoints[2];
          camaraPoints[0].resize(9);
          camaraPoints[1].resize(9);
          for (int r = 0; r < 9; r++)
          {
            camaraPoints[0][r].x = positionPixelsX1[r];
            camaraPoints[0][r].y = positionPixelsY1[r];
            camaraPoints[1][r].x = positionPixelsX2[r];
            camaraPoints[1][r].y = positionPixelsY2[r];
          }
          int nframes = 1;
          int n = 9;
          int N = nframes * n;
          CvSize imageSize = Size(320, 180);

          CvMat _M1 = cvMat(3, 3, CV_64F, m_intrinsicCam1.data());
          CvMat _M2 = cvMat(3, 3, CV_64F, m_intrinsicCam2.data());
          CvMat _D1 = cvMat(1, 5, CV_64F, m_distortionCam1.data());
          CvMat _D2 = cvMat(1, 5, CV_64F, m_distortionCam2.data());

          npoints.resize(nframes, n);
          objectPoints.resize(nframes * n);
          CvMat _imagePoints1 = cvMat(1, N, CV_32FC2, &camaraPoints[0][0]);
          CvMat _imagePoints2 = cvMat(1, N, CV_32FC2, &camaraPoints[1][0]);
          CvMat _npoints = cvMat(1, npoints.size(), CV_32S, &npoints[0]);
          double R[3][3], T[3], E[3][3], F[3][3];

          CvMat _R = cvMat(3, 3, CV_64F, R);
          CvMat _T = cvMat(3, 1, CV_64F, T);
          CvMat _E = cvMat(3, 3, CV_64F, E);
          CvMat _F = cvMat(3, 3, CV_64F, F);

          for (int t = 0; t < 9; t++)
            objectPoints[t] = cvPoint3D32f(positionMetersX[t], positionMetersY[t], positionMetersZ[t]);

          for (int i = 1; i < nframes; i++)
            copy(objectPoints.begin(), objectPoints.begin() + n, objectPoints.begin() + i * n);

          CvMat _objectPoints = cvMat(1, N, CV_32FC3, &objectPoints[0]);

          m_task->war("Running stereo calibration ...");
          cvStereoCalibrate( &_objectPoints, &_imagePoints1, &_imagePoints2, &_npoints, &_M1, &_D1, &_M2, &_D2, imageSize, &_R, &_T, &_E, &_F,
                                 cvTermCriteria(CV_TERMCRIT_ITER + CV_TERMCRIT_EPS, 100, 1e-5), CV_CALIB_USE_INTRINSIC_GUESS
                                + CV_CALIB_FIX_ASPECT_RATIO
                                + CV_CALIB_ZERO_TANGENT_DIST
                                + CV_CALIB_RATIONAL_MODEL
                                + CV_CALIB_SAME_FOCAL_LENGTH
                                + CV_CALIB_FIX_K3 + CV_CALIB_FIX_K4 + CV_CALIB_FIX_K5);

          baseline = sqrt(T[0] * T[0] + T[1] * T[1] + T[2] * T[2]);
          m_task->inf("Baseline = %.4f m", baseline);

          vector<CvPoint3D32f> lines[2];
          camaraPoints[0].resize(N);
          camaraPoints[1].resize(N);
          _imagePoints1 = cvMat(1, N, CV_32FC2, &camaraPoints[0][0]);
          _imagePoints2 = cvMat(1, N, CV_32FC2, &camaraPoints[1][0]);
          lines[0].resize(N);
          lines[1].resize(N);
          CvMat _L1 = cvMat(1, N, CV_32FC3, &lines[0][0]);
          CvMat _L2 = cvMat(1, N, CV_32FC3, &lines[1][0]);

          vector<CvPoint3D32f> lines_epipolar[2];
          lines_epipolar[0].resize(100);
          lines_epipolar[1].resize(100);

          CvMat* _R_L = cvCreateMat(3, 1, CV_64F);
          CvMat* _T_L = cvCreateMat(3, 1, CV_64F);
          CvMat* R_F = cvCreateMat(3, 3, CV_64F);
          R_Fi = cvCreateMat(3, 3, CV_64F);
          t_final = cvCreateMat(3, 1, CV_64F);
          cvFindExtrinsicCameraParams2(&_objectPoints, &_imagePoints1, &_M1, &_D1, _R_L, _T_L, 0);
          cvRodrigues2(_R_L, R_F, 0);
          cvInvert(R_F, R_Fi);
          cvMatMul(R_Fi, _T_L, t_final);

          cvUndistortPoints(&_imagePoints1, &_imagePoints1, &_M1, &_D1, 0, &_M1);
          cvUndistortPoints(&_imagePoints2, &_imagePoints2, &_M2, &_D2, 0, &_M2);
          cvComputeCorrespondEpilines(&_imagePoints1, 1, &_F, &_L1);
          cvComputeCorrespondEpilines(&_imagePoints2, 2, &_F, &_L2);

          double avgErr = 0;
          for (int i = 0; i < N; i++)
          {
            double err = fabs(camaraPoints[0][i].x * lines[1][i].x + camaraPoints[0][i].y * lines[1][i].y + lines[1][i].z)
                + fabs(camaraPoints[1][i].x * lines[0][i].x + camaraPoints[1][i].y * lines[0][i].y + lines[0][i].z);
            avgErr += err;
          }

          m_task->inf("err = %g cm", avgErr / (nframes * n));

          mx1 = cvCreateMat( imageSize.height, imageSize.width, CV_32F );
          my1 = cvCreateMat( imageSize.height, imageSize.width, CV_32F );
          mx2 = cvCreateMat( imageSize.height, imageSize.width, CV_32F );
          my2 = cvCreateMat( imageSize.height, imageSize.width, CV_32F );

          double R1[3][3], R2[3][3], P1[3][4], P2[3][4];
          CvMat _R1 = cvMat(3, 3, CV_64F, R1);
          CvMat _R2 = cvMat(3, 3, CV_64F, R2);
          CvMat _P1 = cvMat(3, 4, CV_64F, P1);
          CvMat _P2 = cvMat(3, 4, CV_64F, P2);

          cvStereoRectify( &_M1, &_M2, &_D1, &_D2, imageSize, &_R, &_T, &_R1, &_R2, &_P1, &_P2, 0, 0 );
          cvInitUndistortRectifyMap(&_M1,&_D1,&_R1,&_P1,mx1,my1);
          cvInitUndistortRectifyMap(&_M2,&_D2,&_R2,&_P2,mx2,my2);

          R1_T = cvCreateMat(3, 3, CV_64F);
          cvTranspose(&_R1, R1_T);
          diff = (cvmGet(&_P1, 0, 2) - cvmGet(&_P2, 0, 2));
          focal = (cvmGet(&_P1, 0, 0) + cvmGet(&_P2, 0, 0)) / 2;
          cx1 = cvmGet(&_P1, 0, 2);
          cy1 = cvmGet(&_P1, 1, 2);
          m_task->inf("diff = %f - focal = %f - cx1 = %f - cy1 = %f",diff,focal,cx1,cy1);

          PC_RECT = cvMat(3, 1, CV_64F, pc_r);
          PC = cvMat(3, 1, CV_64F, pc);
          PC_WA = cvMat(3, 1, CV_64F, pc_wa);

        }

        bool
        getRealCoord(int cam1_x, int cam1_y, int cam2_x, int cam2_y)
        {
          coordImage m_coord_cam1 = getUndistortedPoint(cam1_x, cam1_y, mx1, my1);
          coordImage m_coord_cam2 = getUndistortedPoint(cam2_x, cam2_y, mx2, my2);

          if (m_coord_cam1.x != -1 && m_coord_cam1.y != -1 && m_coord_cam2.x != -1 && m_coord_cam2.y != -1)
          {
            float d = ((focal * baseline) / ((m_coord_cam1.x - m_coord_cam2.x) - diff));
            float X = ((m_coord_cam1.x - cx1) * d) / focal;
            float Y = ((m_coord_cam1.y - cy1) * d) / focal;

            pc_r[0] = X;
            pc_r[1] = Y;
            pc_r[2] = d;

            cvMatMul(R1_T, &PC_RECT, &PC);
            cvMatMul(R_Fi, &PC, &PC_WA);
            cvSub(&PC_WA, t_final, &PC_WA);
            m_real_coord.x = pc_wa[0];
            m_real_coord.y = pc_wa[1];
            m_real_coord.z = pc_wa[2];

            return true;
          }
          else
            return false;

        }

        coordImage
        getUndistortedPoint( int x, int y, CvMat* mapX, CvMat* mapY)
        {
          coordImage m_undistorted;
          bool isFoundPoint = false;

          for (int ay = 0; ay < mapX->rows; ay++)
          {
            for (int ax = 0; ax < mapY->cols; ax++)
            {
              if (x == (int)cvmGet(mapX, ay, ax))
              {
                if (y == (int)cvmGet(mapY, ay, ax) || y == (int)cvmGet(mapY, ay, ax) + 1 || y == (int)cvmGet(mapY, ay, ax) - 1)
                {
                  m_undistorted.x = ax;
                  m_undistorted.y = ay;
                  isFoundPoint = true;
                }
              }
              if (isFoundPoint)
                break;
            }
            if (!isFoundPoint)
            {
              for (int ax = 0; ax < mapY->cols; ax++)
              {
                if (x == (int)cvmGet(mapX, ay, ax) + 1 || x == (int)cvmGet(mapX, ay, ax) - 1)
                {
                  if (y == (int)cvmGet(mapY, ay, ax) || y == (int)cvmGet(mapY, ay, ax) + 1 || y == (int)cvmGet(mapY, ay, ax) - 1)
                  {
                    m_undistorted.x = ax;
                    m_undistorted.y = ay;
                    isFoundPoint = true;
                  }
                }
                if (isFoundPoint)
                  break;
              }
            }
            if (isFoundPoint)
              break;
          }

          if (!isFoundPoint)
          {
            for (int ay = 0; ay < mapX->rows; ay++)
            {
              for (int ax = 0; ax < mapY->cols; ax++)
              {
                if (y == (int)cvmGet(mapY, ay, ax))
                {
                  if (x == (int)cvmGet(mapX, ay, ax) || x == (int)cvmGet(mapX, ay, ax) + 1 || x == (int)cvmGet(mapX, ay, ax) - 1)
                  {
                    m_undistorted.x = ax;
                    m_undistorted.y = ay;
                    isFoundPoint = true;
                  }
                }
                if (isFoundPoint)
                  break;
              }
              if (!isFoundPoint)
              {
                for (int ax = 0; ax < mapY->cols; ax++)
                {
                  if (y == (int)cvmGet(mapY, ay, ax) + 1 || y == (int)cvmGet(mapY, ay, ax) - 1)
                  {
                    if (x == (int)cvmGet(mapX, ay, ax) || x == (int)cvmGet(mapX, ay, ax) + 1 || x == (int)cvmGet(mapX, ay, ax) - 1)
                    {
                      m_undistorted.x = ax;
                      m_undistorted.y = ay;
                      isFoundPoint = true;
                    }
                  }
                  if (isFoundPoint)
                    break;
                }
              }
              if (isFoundPoint)
                break;
            }
          }

          if (!isFoundPoint)
          {
            m_undistorted.x = -1;
            m_undistorted.y = -1;
          }

          return m_undistorted;
        }

        coordImage m_coordImage;
        realCoord m_real_coord;

      private:
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //! Baseline - distance between the centers of the two cameras
        float baseline;
        //! Focal point
        float focal;
        //! Focal center (X)
        float cx1;
        //! Focal center (Y)
        float cy1;
        //! Distance between the focal centers of the two cameras
        float diff;
        //! Matrix to compute stereo match
        double pc_r[3];
        CvMat PC_RECT;
        double pc_wa[3];
        double pc[3];
        CvMat* R1_T;
        CvMat PC;
        CvMat* R_Fi;
        CvMat PC_WA;
        CvMat* t_final;
        //! Matrix of remap images
        CvMat* mx1;
        CvMat* my1;
        CvMat* mx2;
        CvMat* my2;

    };
  }
}

#endif
