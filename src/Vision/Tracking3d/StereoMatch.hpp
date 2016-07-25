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
    static const int c_number_of_chessboard = 9;
    static const int c_number_of_frames = 1;
    static const CvSize c_image_size = Size(640, 360);

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
          while (c < c_number_of_chessboard)
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
          camaraPoints[0].resize(c_number_of_chessboard);
          camaraPoints[1].resize(c_number_of_chessboard);
          for (int r = 0; r < c_number_of_chessboard; r++)
          {
            camaraPoints[0][r].x = positionPixelsX1[r];
            camaraPoints[0][r].y = positionPixelsY1[r];
            camaraPoints[1][r].x = positionPixelsX2[r];
            camaraPoints[1][r].y = positionPixelsY2[r];
          }

          CvMat _M1 = cvMat(3, 3, CV_64F, m_intrinsicCam1.data());
          CvMat _M2 = cvMat(3, 3, CV_64F, m_intrinsicCam2.data());
          CvMat _D1 = cvMat(1, 5, CV_64F, m_distortionCam1.data());
          CvMat _D2 = cvMat(1, 5, CV_64F, m_distortionCam2.data());

          npoints.resize(c_number_of_frames, c_number_of_chessboard);
          objectPoints.resize(c_number_of_frames * c_number_of_chessboard);
          CvMat _imagePoints1 = cvMat(1, c_number_of_frames * c_number_of_chessboard, CV_32FC2, &camaraPoints[0][0]);
          CvMat _imagePoints2 = cvMat(1, c_number_of_frames * c_number_of_chessboard, CV_32FC2, &camaraPoints[1][0]);
          CvMat _npoints = cvMat(1, npoints.size(), CV_32S, &npoints[0]);
          double R[3][3], T[3], E[3][3], F[3][3];

          CvMat _R = cvMat(3, 3, CV_64F, R);
          CvMat _T = cvMat(3, 1, CV_64F, T);
          CvMat _E = cvMat(3, 3, CV_64F, E);
          CvMat _F = cvMat(3, 3, CV_64F, F);

          for (int t = 0; t < c_number_of_chessboard; t++)
            objectPoints[t] = cvPoint3D32f(positionMetersX[t], positionMetersY[t], positionMetersZ[t]);

          for (int i = 1; i < c_number_of_frames; i++)
            copy(objectPoints.begin(), objectPoints.begin() + c_number_of_chessboard, objectPoints.begin() + i * c_number_of_chessboard);

          CvMat _objectPoints = cvMat(1, c_number_of_frames * c_number_of_chessboard, CV_32FC3, &objectPoints[0]);

          cvStereoCalibrate( &_objectPoints, &_imagePoints1, &_imagePoints2, &_npoints, &_M1, &_D1, &_M2, &_D2, c_image_size, &_R, &_T, &_E, &_F,
                                 cvTermCriteria(CV_TERMCRIT_ITER + CV_TERMCRIT_EPS, 100, 1e-5), CV_CALIB_USE_INTRINSIC_GUESS
                                + CV_CALIB_FIX_ASPECT_RATIO
                                + CV_CALIB_ZERO_TANGENT_DIST
                                + CV_CALIB_RATIONAL_MODEL
                                + CV_CALIB_SAME_FOCAL_LENGTH
                                + CV_CALIB_FIX_K3 + CV_CALIB_FIX_K4 + CV_CALIB_FIX_K5);

          m_baseline = sqrt(T[0] * T[0] + T[1] * T[1] + T[2] * T[2]);
          m_task->inf("Baseline = %.4f m", m_baseline);

          vector<CvPoint3D32f> lines[2];
          camaraPoints[0].resize(c_number_of_frames * c_number_of_chessboard);
          camaraPoints[1].resize(c_number_of_frames * c_number_of_chessboard);
          _imagePoints1 = cvMat(1, c_number_of_frames * c_number_of_chessboard, CV_32FC2, &camaraPoints[0][0]);
          _imagePoints2 = cvMat(1, c_number_of_frames * c_number_of_chessboard, CV_32FC2, &camaraPoints[1][0]);
          lines[0].resize(c_number_of_frames * c_number_of_chessboard);
          lines[1].resize(c_number_of_frames * c_number_of_chessboard);
          CvMat _L1 = cvMat(1, c_number_of_frames * c_number_of_chessboard, CV_32FC3, &lines[0][0]);
          CvMat _L2 = cvMat(1, c_number_of_frames * c_number_of_chessboard, CV_32FC3, &lines[1][0]);

          vector<CvPoint3D32f> lines_epipolar[2];
          lines_epipolar[0].resize(100);
          lines_epipolar[1].resize(100);

          CvMat* _R_L = cvCreateMat(3, 1, CV_64F);
          CvMat* _T_L = cvCreateMat(3, 1, CV_64F);
          CvMat* R_F = cvCreateMat(3, 3, CV_64F);
          m_r_fi = cvCreateMat(3, 3, CV_64F);
          m_t_final = cvCreateMat(3, 1, CV_64F);
          cvFindExtrinsicCameraParams2(&_objectPoints, &_imagePoints1, &_M1, &_D1, _R_L, _T_L, 0);
          cvRodrigues2(_R_L, R_F, 0);
          cvInvert(R_F, m_r_fi);
          cvMatMul(m_r_fi, _T_L, m_t_final);

          cvUndistortPoints(&_imagePoints1, &_imagePoints1, &_M1, &_D1, 0, &_M1);
          cvUndistortPoints(&_imagePoints2, &_imagePoints2, &_M2, &_D2, 0, &_M2);
          cvComputeCorrespondEpilines(&_imagePoints1, 1, &_F, &_L1);
          cvComputeCorrespondEpilines(&_imagePoints2, 2, &_F, &_L2);

          double avgErr = 0;
          for (int i = 0; i < (c_number_of_frames * c_number_of_chessboard); i++)
          {
            double err = fabs(camaraPoints[0][i].x * lines[1][i].x + camaraPoints[0][i].y * lines[1][i].y + lines[1][i].z)
                + fabs(camaraPoints[1][i].x * lines[0][i].x + camaraPoints[1][i].y * lines[0][i].y + lines[0][i].z);
            avgErr += err;
          }

          m_task->inf("err = %g", avgErr / (c_number_of_frames * c_number_of_chessboard));

          m_mx1 = cvCreateMat( c_image_size.height, c_image_size.width, CV_32F );
          m_my1 = cvCreateMat( c_image_size.height, c_image_size.width, CV_32F );
          m_mx2 = cvCreateMat( c_image_size.height, c_image_size.width, CV_32F );
          m_my2 = cvCreateMat( c_image_size.height, c_image_size.width, CV_32F );

          double R1[3][3], R2[3][3], P1[3][4], P2[3][4];
          CvMat _R1 = cvMat(3, 3, CV_64F, R1);
          CvMat _R2 = cvMat(3, 3, CV_64F, R2);
          CvMat _P1 = cvMat(3, 4, CV_64F, P1);
          CvMat _P2 = cvMat(3, 4, CV_64F, P2);

          cvStereoRectify( &_M1, &_M2, &_D1, &_D2, c_image_size, &_R, &_T, &_R1, &_R2, &_P1, &_P2, 0, 0 );
          cvInitUndistortRectifyMap(&_M1, &_D1, &_R1, &_P1, m_mx1, m_my1);
          cvInitUndistortRectifyMap(&_M2, &_D2, &_R2, &_P2, m_mx2, m_my2);

          m_r1_t = cvCreateMat(3, 3, CV_64F);
          cvTranspose(&_R1, m_r1_t);
          m_diff = (cvmGet(&_P1, 0, 2) - cvmGet(&_P2, 0, 2));
          m_focal = (cvmGet(&_P1, 0, 0) + cvmGet(&_P2, 0, 0)) / 2;
          m_cx1 = cvmGet(&_P1, 0, 2);
          m_cy1 = cvmGet(&_P1, 1, 2);
          m_task->inf("diff = %f - focal = %f - cx1 = %f - cy1 = %f",m_diff,m_focal,m_cx1,m_cy1);

          m_pc_rect = cvMat(3, 1, CV_64F, m_pc_r);
          m_pcc = cvMat(3, 1, CV_64F, m_pc);
          m_pc_wac = cvMat(3, 1, CV_64F, m_pc_wa);

        }

        bool
        getRealCoord(int cam1_x, int cam1_y, int cam2_x, int cam2_y)
        {
          coordImage m_coord_cam1 = getUndistortedPoint(cam1_x, cam1_y, m_mx1, m_my1);
          coordImage m_coord_cam2 = getUndistortedPoint(cam2_x, cam2_y, m_mx2, m_my2);

          if (m_coord_cam1.x != -1 && m_coord_cam1.y != -1 && m_coord_cam2.x != -1 && m_coord_cam2.y != -1)
          {
            float d = ((m_focal * m_baseline) / ((m_coord_cam1.x - m_coord_cam2.x) - m_diff));
            float X = ((m_coord_cam1.x - m_cx1) * d) / m_focal;
            float Y = ((m_coord_cam1.y - m_cy1) * d) / m_focal;

            m_pc_r[0] = X;
            m_pc_r[1] = Y;
            m_pc_r[2] = d;

            cvMatMul(m_r1_t, &m_pc_rect, &m_pcc);
            cvMatMul(m_r_fi, &m_pcc, &m_pc_wac);
            cvSub(&m_pc_wac, m_t_final, &m_pc_wac);
            m_real_coord.x = m_pc_wa[0];
            m_real_coord.y = m_pc_wa[1];
            m_real_coord.z = m_pc_wa[2];

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
        float m_baseline;
        //! Focal point
        float m_focal;
        //! Focal center (X)
        float m_cx1;
        //! Focal center (Y)
        float m_cy1;
        //! Distance between the focal centers of the two cameras
        float m_diff;
        //! Matrix to compute stereo match
        double m_pc_r[3];
        CvMat m_pc_rect;
        double m_pc_wa[3];
        double m_pc[3];
        CvMat* m_r1_t;
        CvMat m_pcc;
        CvMat* m_r_fi;
        CvMat m_pc_wac;
        CvMat* m_t_final;
        //! Matrix of remap images
        CvMat* m_mx1;
        CvMat* m_my1;
        CvMat* m_mx2;
        CvMat* m_my2;

    };
  }
}

#endif
