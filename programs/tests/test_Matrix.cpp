//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Luís Venâncio                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <iostream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

// Local headers.
#include "Test.hpp"

// Options
#define DEBUG

// Test matrices
enum
{
  POS_INT = 0,
  NEG_INT = 1
};

double mat_3x3[2][9]={{1, 2, 3, 4, 5, 6, 7, 8, 9},
                      {-4, -3, -2, -1, 0, 1, 2, 3, 4}};
double rect_mat[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
double vec_3[2][3] = {{1, 2, 3}, {4, 5, 6}};
double mat_9x9[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,
                    10, 11, 12, 13, 14, 15, 16, 17, 18,
                    19, 20, 21, 22, 23, 24, 25, 26, 27,
                    28, 29, 30, 31, 32, 33, 34, 35, 36,
                    37, 38, 39, 40, 41, 42, 43, 44, 45,
                    46, 47, 48, 49, 50, 51, 52, 53, 54,
                    55, 56, 57, 58, 59, 60, 61, 62, 63,
                    64, 65, 66, 67, 68, 69, 70, 71, 72,
                    73, 74, 75, 76, 77, 78, 79, 80, 81};
double invertable_3x3[] = {1, 2, 3, 3, 2, 1, 2, 1, 3};

// Auxiliary functions
template<typename Mat>
void
printMatrix(Mat& m)
{
#ifdef DEBUG
  std::stringstream ss;
  ss << m;
  std::cout << "Size: " << m.size() << "\n";
  std::cout << "Matrix:\n" << ss.str() << "\n";
#endif
}

template<typename MatA, typename MatB>
bool
compareElements(MatA& mat_a, MatB& mat_b)
{
  if (mat_a.size() != mat_b.size())
    return 0;
  
  return memcmp(mat_a.begin(), mat_b.begin(), mat_a.size()) == 0;
}

int
main(void)
{
  Test test("Math::EigenMatrix");


  //==========================================
  // Test constructors
  //==========================================
  {
    bool passed = false;
    try
    {
      EigenMatrix eig_mat;
      passed = true;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("EigenMatrix::EigenMatrix()", passed);

    passed = false;
    try
    {
      EigenMatrix eig_mat(3, 3);
      passed = true;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("EigenMatrix::EigenMatrix(double r, double c)", passed);

    passed = false;
    try
    {
      EigenMatrix eig_mat(mat_3x3[POS_INT], 3, 3);
      Matrix std_mat(mat_3x3[POS_INT], 3, 3);
      passed = memcmp(eig_mat.begin(), std_mat.begin(), 9) == 0;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("EigenMatrix::EigenMatrix(double* data, double r, double c)", passed);

    passed = false;
    try
    {
      Matrix std_mat(mat_3x3[POS_INT], 3, 3);
      EigenMatrix input_mat(mat_3x3[POS_INT], 3, 3);
      EigenMatrix out_mat(input_mat);
      passed = memcmp(out_mat.begin(), std_mat.begin(), 9) == 0;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("EigenMatrix::EigenMatrix(const EigenMatrix& m)", passed);

    passed = false;
    try
    {
      Matrix std_mat(3);
      EigenMatrix eig_mat(3);
      passed = memcmp(eig_mat.begin(), std_mat.begin(), 9) == 0;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("EigenMatrix::EigenMatrix(size_t n)", passed);

    passed = false;
    try
    {
      Matrix std_mat(mat_3x3[POS_INT], 9);
      EigenMatrix eig_mat(mat_3x3[POS_INT], 9);
      passed = memcmp(eig_mat.begin(), std_mat.begin(), 9) == 0;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("EigenMatrix::EigenMatrix(double* diag, size_t n)", passed);
  }

  //==========================================
  // Test pointer access
  //==========================================
  {
    EigenMatrix eig_mat(mat_3x3[POS_INT], 3, 3);

    double* p;
    p = eig_mat.begin();
    test.boolean("EigenMatrix::begin()", *p == 1);
    p = eig_mat.end();
    test.boolean("EigenMatrix::end()", *p == 9);

    // Const pointer
    const double* begin_pointer = eig_mat.begin();
    test.boolean("EigenMatrix::begin()", *begin_pointer == 1);
    const double* end_pointer = eig_mat.end();
    test.boolean("EigenMatrix::end()", *end_pointer == 9);

    // Const pointer
    const double* begin_pointer2 = eig_mat.cbegin();
    test.boolean("EigenMatrix::cbegin()", *begin_pointer2 == 1);
    const double* end_pointer2 = eig_mat.cend();
    test.boolean("EigenMatrix::cend()", *end_pointer2 == 9);
  }

  //==========================================
  // Test sizes
  //==========================================
  {
    EigenMatrix eig_mat(rect_mat, 4, 3);

    test.boolean("EigenMatrix::rows()", eig_mat.rows() == 4);
    test.boolean("EigenMatrix::columns()", eig_mat.columns() == 3);
    test.boolean("EigenMatrix::size()", eig_mat.size() == 12);
  }

  //==========================================
  // Test element access
  //==========================================
  {
    EigenMatrix eig_mat(mat_3x3[POS_INT], 3, 3);

    test.boolean("EigenMatrix::operator()(size_t i, size_t j) const", eig_mat(2, 0) == 7);
    test.boolean("EigenMatrix::operator()(size_t i)", eig_mat(6) == 7);

    test.boolean("EigenMatrix::element()(size_t i, size_t j) const", eig_mat.element(2, 0) == 7);
    test.boolean("EigenMatrix::element()(size_t i)", eig_mat.element(6) == 7);
  }

  //==========================================
  // Test operators
  //==========================================
  {
    EigenMatrix eig_mat_A(mat_3x3[POS_INT], 3, 3);
    EigenMatrix eig_mat_B(mat_3x3[POS_INT], 3, 3);
    EigenMatrix eig_mat_C(mat_3x3[NEG_INT], 3, 3);
    test.boolean("EigenMatrix::operator==(const EigenMatrix& m) const", eig_mat_A == eig_mat_B && !(eig_mat_A == eig_mat_C));

    EigenMatrix eig_mat_A_cpy;
    eig_mat_A_cpy = eig_mat_A;
    test.boolean("EigenMatrix::operator=(const EigenMatrix& m)", eig_mat_A == eig_mat_A_cpy);

    EigenMatrix eig_mat_D;
    eig_mat_D = eig_mat_A + eig_mat_B;
    double test_input_a[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    EigenMatrix eig_test_a(test_input_a, 3, 3);
    test.boolean("EigenMatrix::operator+(const EigenMatrix& m1, const EigenMatrix& m2)", eig_mat_D == eig_test_a);

    eig_mat_D = eig_mat_A - eig_mat_B;
    EigenMatrix eig_test_b(3, 3, 0);
    test.boolean("EigenMatrix::operator-(const EigenMatrix& m1, const EigenMatrix& m2)", eig_mat_D == eig_test_b);

    eig_mat_D = eig_mat_A * eig_mat_B;
    double test_input_c[] = {30, 36, 42, 66, 81, 96, 102, 126, 150};
    EigenMatrix eig_test_c(test_input_c, 3, 3);
    test.boolean("EigenMatrix::operator*(const EigenMatrix& m1, const EigenMatrix& m2)", eig_mat_D == eig_test_c);

    eig_mat_D = eig_mat_A & eig_mat_B;
    double test_input_d[] = {1, 4, 9, 16, 25, 36, 49, 64, 81};
    EigenMatrix eig_test_d(test_input_d, 3, 3);
    test.boolean("EigenMatrix::operator&(const EigenMatrix& m1, const EigenMatrix& m2)", eig_mat_D == eig_test_d);

    eig_mat_D = eig_mat_A / eig_mat_B;
    double test_input_e[] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    EigenMatrix eig_test_e(test_input_e, 3, 3);
    test.boolean("EigenMatrix::operator/(const EigenMatrix& a, const EigenMatrix& b)", eig_mat_D == eig_test_e);

    eig_mat_D = eig_mat_A * 7;
    double test_input_f[] = {7, 14, 21, 28, 35, 42, 49, 56, 63};
    EigenMatrix eig_test_f(test_input_f, 3, 3);
    test.boolean("EigenMatrix::operator*(double x, const EigenMatrix& a)", eig_mat_A * 7 == 7 * eig_mat_A && eig_mat_D == eig_test_f);

    eig_mat_D = eig_mat_A / 2;
    double test_input_g[] = {0.5, 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5};
    EigenMatrix eig_test_g(test_input_g, 3, 3);
    test.boolean("EigenMatrix::operator/(const EigenMatrix& a, double x)", eig_mat_D == eig_test_g);

    Matrix mat_A(mat_3x3[POS_INT], 3, 3);
    Matrix mat_C(mat_3x3[NEG_INT], 3, 3);
    EigenMatrix eig_test_h = eig_mat_A*eig_mat_C;
    Matrix test_h = mat_A*mat_C;
    test.boolean("EigenMatrix::multiply(const EigenMatrix& m2)", compareElements(eig_test_h, test_h));
  }

  //==========================================
  // Test matrix types
  //==========================================
  {
    EigenMatrix eig_square_mat(3, 3, 7);
    EigenMatrix eig_row_vec(1, 3, 7);
    EigenMatrix eig_col_vec(3, 1, 7);
    EigenMatrix eig_empty_mat;

    test.boolean("EigenMatrix::isSquare()", eig_square_mat.isSquare());
    test.boolean("EigenMatrix::isVector()", eig_row_vec.isVector() && eig_col_vec.isVector());
    test.boolean("EigenMatrix::isRowVector()", eig_row_vec.isRowVector());
    test.boolean("EigenMatrix::isRowVector(size_t c)", eig_row_vec.isRowVector(3));
    test.boolean("EigenMatrix::isColumnVector()", eig_col_vec.isColumnVector());
    test.boolean("EigenMatrix::isColumnVector(size_t c)", eig_col_vec.isColumnVector(3));
    test.boolean("EigenMatrix::isEmpty()", eig_empty_mat.isEmpty());
  }

  //==========================================
  // Test limit values
  //==========================================
  {
    EigenMatrix eig_mat(mat_3x3[POS_INT], 3, 3);
    bool passed = true;

    double min_limit = 2;
    double max_limit = 6;

    eig_mat.maxLimitValues(max_limit);
    for(size_t i = 0; i < eig_mat.size(); i++)
    {
      if (eig_mat(i) > max_limit)
        passed = false;
    }
    test.boolean("EigenMatrix::maxLimitValues(double max)", passed);

    passed = true;
    eig_mat.fill(3, 3, mat_3x3[POS_INT]);
    eig_mat.minLimitValues(min_limit);
    for(size_t i = 0; i < eig_mat.size(); i++)
    {
      if (eig_mat(i) < min_limit)
        passed = false;
    }
    test.boolean("EigenMatrix::minLimitValues(double min)", passed);
    
    passed = true;
    eig_mat.fill(3, 3, mat_3x3[POS_INT]);
    eig_mat.trimValues(min_limit, max_limit);
    for(size_t i = 0; i < eig_mat.size(); i++)
    {
      if (eig_mat(i) < min_limit || eig_mat(i) > max_limit)
        passed = false;
    }
    test.boolean("EigenMatrix::trimValues(double min, double max)", passed);
    
    passed = true;
    eig_mat.fill(3, 3, mat_3x3[NEG_INT]);
    eig_mat.trimValues(min_limit);
    for(size_t i = 0; i < eig_mat.size(); i++)
    {
      if (eig_mat(i) < -min_limit || eig_mat(i) > min_limit)
        passed = false;
    }
    test.boolean("EigenMatrix::trimValues(double lim)", passed);
  }

  //==========================================
  // Test block operations
  //==========================================
  {
    EigenMatrix eig_mat(mat_3x3[POS_INT], 3, 3);
    EigenMatrix block(2, 2);
    block = eig_mat.get(1, 2, 1, 2);

    double input_mat[] = {5, 6, 8, 9};
    EigenMatrix compare_mat(input_mat, 2, 2);
    test.boolean("EigenMatrix::get(size_t i1, size_t i2, size_t j1, size_t j2) const", block == compare_mat);

    eig_mat.set(0, 1, 0, 1, compare_mat);
    double input_mat2[] = {5, 6, 3, 8, 9, 6, 7, 8, 9};
    EigenMatrix compare_mat2(input_mat2, 3, 3);
    test.boolean("EigenMatrix::set(size_t i1, size_t i2, size_t j1, size_t j2, const EigenMatrix& m)", eig_mat == compare_mat2);


    EigenMatrix eig_mat_A(mat_3x3[POS_INT], 3, 3);
    EigenMatrix eig_mat_B(mat_3x3[NEG_INT], 3, 3);
    EigenMatrix eig_mat_res = eig_mat_A.blkDiag(eig_mat_B);
    double input_mat3[] = {1, 2, 3, 0, 0, 0, 
                           4, 5, 6, 0, 0, 0,
                           7, 8, 9, 0, 0, 0,
                           0, 0, 0, -4, -3, -2,
                           0, 0, 0, -1, 0, 1,
                           0, 0, 0, 2, 3, 4};
    EigenMatrix compare_mat3(input_mat3, 6, 6);
    test.boolean("EigenMatrix::blkDiag(const EigenMatrix& mx_in)", eig_mat_res == compare_mat3);

    EigenMatrix eig_mat_C(mat_3x3[POS_INT], 3, 3);
    EigenMatrix eig_mat_D(mat_3x3[NEG_INT], 3, 3);
    EigenMatrix eig_mat_res2 = eig_mat_C.vertCat(eig_mat_D);
    double input_mat4[] = {1, 2, 3, 
                           4, 5, 6,
                           7, 8, 9,
                          -4, -3, -2,
                          -1, 0, 1,
                           2, 3, 4};
    EigenMatrix compare_mat4(input_mat4, 6, 3);
    test.boolean("EigenMatrix::vertCat(const EigenMatrix& mx_in)", eig_mat_res2 == compare_mat4);

    EigenMatrix eig_mat_E(mat_3x3[POS_INT], 3, 3);
    EigenMatrix eig_mat_F(mat_3x3[NEG_INT], 3, 3);
    EigenMatrix eig_mat_res3 = eig_mat_E.horzCat(eig_mat_F);
    double input_mat5[] = {1, 2, 3, -4, -3, -2,
                           4, 5, 6, -1, 0, 1,
                           7, 8, 9, 2, 3, 4};                          
                          
                           
    EigenMatrix compare_mat5(input_mat5, 3, 6);
    test.boolean("EigenMatrix::horzCat(const EigenMatrix& mx_in)", eig_mat_res3 == compare_mat5);

    EigenMatrix eig_mat_G(mat_3x3[POS_INT], 3, 3);
    double input_mat6[] = {1, 2, 3, 4, 0, 1, 7, 2, 3};
    EigenMatrix eig_mat_H(input_mat5, 2, 2);
    eig_mat_G.put(1, 1, eig_mat_H);
    double input_mat7[] = {1, 2, 3, 4, 0, 1, 7, 2, 3};
    EigenMatrix compare_mat7(input_mat7, 3, 3);
    test.boolean("EigenMatrix::put(size_t i, size_t j, const EigenMatrix& a)", eig_mat == compare_mat2);
  }

  //==========================================
  // Test resize
  //==========================================
  {
    Matrix std_mat(mat_3x3[POS_INT], 3, 3);
    EigenMatrix eig_mat(mat_3x3[POS_INT], 3, 3);
    bool passed = false;

    std_mat.resizeAndKeep(2,2);
    eig_mat.resizeAndKeep(2,2);
    passed = compareElements(std_mat, eig_mat);

    std_mat.resizeAndKeep(4,4);
    eig_mat.resizeAndKeep(4,4);
    passed &= compareElements(std_mat, eig_mat);
    test.boolean("EigenMatrix::resizeAndKeep(size_t r, size_t c)", passed);

    eig_mat.resizeAndFill(2, 5, 7);
    std_mat.resizeAndFill(2, 5, 7);
    passed = eig_mat.rows() == 2;
    passed &= eig_mat.columns() == 5;
    passed &= compareElements(std_mat, eig_mat);
    test.boolean("EigenMatrix::resizeAndFill(size_t r, size_t c, double value)", passed);

    eig_mat.resize(7, 4);
    passed = eig_mat.rows() == 7;
    passed &= eig_mat.columns() == 4;
    test.boolean("EigenMatrix::resize(size_t r, size_t c)", passed);
  }

  //==========================================
  // Test row/column operations
  //==========================================
  {
    EigenMatrix eig_mat(mat_3x3[POS_INT], 3, 3);
    
    double test_input_a[] = {4, 5, 6};
    EigenMatrix eig_test_a(test_input_a, 1, 3);
    test.boolean("EigenMatrix::row(size_t i) const", eig_mat.row(1) == eig_test_a);

    double test_input_b[] = {2, 5, 8};
    EigenMatrix eig_test_b(test_input_b, 3, 1);
    test.boolean("EigenMatrix::column(size_t j) const", eig_mat.column(1) == eig_test_b);
    
    double test_input_c[] = {3, 2, 1, 6, 5, 4, 9, 8, 7};
    EigenMatrix eig_test_c(test_input_c, 3, 3);
    eig_mat.swapColumns(0, 2);
    test.boolean("EigenMatrix::swapColumns(size_t i, size_t j)", eig_mat == eig_test_c);

    double test_input_d[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    EigenMatrix eig_test_d(test_input_d, 3, 3);
    eig_mat.swapRows(0, 2);
    test.boolean("EigenMatrix::swapRows(size_t i, size_t j)", eig_mat == eig_test_d);

    eig_mat.fill(3, 3, mat_3x3[POS_INT]);
    eig_mat.to_row();
    bool passed = eig_mat.rows() == 1;
    passed &= eig_mat.columns() == 9;
    passed &= memcmp(mat_3x3[POS_INT], eig_mat.begin(), 9) == 0;
    test.boolean("EigenMatrix::to_row(void)", passed);

    eig_mat.fill(3, 3, mat_3x3[POS_INT]);
    eig_mat.to_column();
    passed = eig_mat.rows() == 9;
    passed &= eig_mat.columns() == 1;
    passed &= memcmp(mat_3x3[POS_INT], eig_mat.begin(), 9) == 0;
    test.boolean("EigenMatrix::to_column(void)", passed);
  }

  //==========================================
  // Test reductions
  //==========================================
  {
    EigenMatrix eig_mat_a(mat_3x3[NEG_INT], 3, 3);
    double test_input_a[] = {4, 3, 2, 1, 0, 1, 2, 3, 4};
    EigenMatrix eig_test_a(test_input_a, 3, 3);
    test.boolean("EigenMatrix::abs(const EigenMatrix& a)", eig_test_a == eig_test_a);

    EigenMatrix eig_mat_b(mat_3x3[POS_INT], 3, 3);
    test.boolean("EigenMatrix::max(const EigenMatrix& a)", max(eig_mat_b) == 9);
    test.boolean("EigenMatrix::min(const EigenMatrix& a)", min(eig_mat_b) == 1);
    test.boolean("EigenMatrix::sum(const EigenMatrix& a)", sum(eig_mat_b) == 45);
    test.boolean("EigenMatrix::squaresum(const EigenMatrix& a)", squaresum(eig_mat_b) == 285);

    Matrix mat_b(mat_3x3[POS_INT], 3, 3);
    test.boolean("EigenMatrix::median(void) const", eig_mat_b.median() == mat_b.median());
    test.boolean("EigenMatrix::trace(void) const", eig_mat_b.trace() == 15);
  }

  //==========================================
  // Test matrix operations
  //==========================================
  {
    EigenMatrix eig_mat_A(mat_3x3[POS_INT], 3, 3);
    Matrix mat_A(mat_3x3[POS_INT], 3, 3);

    EigenMatrix eig_test_A = eig_mat_A.pow(3);
    Matrix test_A = mat_A.pow(3);
    test.boolean("EigenMatrix::pow(unsigned int n)", compareElements(eig_test_A, test_A));

    EigenMatrix eig_vec_A(vec_3[0], 3, 1);
    EigenMatrix eig_vec_B(vec_3[1], 3, 1);
    Matrix vec_A(vec_3[0], 3, 1);
    Matrix vec_B(vec_3[1], 3, 1);

    test.boolean("EigenMatrix::dot(const EigenMatrix& a, const EigenMatrix& b)", EigenMatrix::dot(eig_vec_A, eig_vec_B) == Matrix::dot(vec_A, vec_B));

    EigenMatrix eig_test_B = EigenMatrix::cross(eig_vec_A, eig_vec_B);
    Matrix test_B = Matrix::cross(vec_A, vec_B);
    test.boolean("EigenMatrix::cross(const EigenMatrix& a, const EigenMatrix& b)", compareElements(eig_test_B, test_B));

    EigenMatrix eig_mat_B(mat_9x9, 9, 9);
    Matrix mat_B(mat_9x9, 9, 9);
    test.boolean("EigenMatrix::det(void) const", eig_mat_A.det() == mat_A.det());

    EigenMatrix eig_mat_C(rect_mat, 4, 3);
    double test_input_c[] = {1, 4, 7, 10, 2, 5, 8, 11, 3, 6, 9, 12};
    EigenMatrix eig_test_C(test_input_c, 3, 4);
    test.boolean("EigenMatrix::transpose(const EigenMatrix& a)", transpose(eig_mat_C) == eig_test_C);

    EigenMatrix eig_mat_D(mat_3x3[POS_INT], 3, 3);
    EigenMatrix eig_mat_E(invertable_3x3, 3, 3);
    test.boolean("EigenMatrix::isInvertible(void) const", !eig_mat_D.isInvertible() && eig_mat_E.isInvertible());
  }

  //==========================================
  // Test norms
  //==========================================
  {
    EigenMatrix eig_vec_A(vec_3[0], 3, 1);
    Matrix vec_A(vec_3[0], 3, 1);

    EigenMatrix eig_mat_A(mat_3x3[POS_INT], 3, 3);
    Matrix mat_A(mat_3x3[POS_INT], 3, 3);

    bool passed = true;
    passed &= eig_vec_A.norm_p(1) == vec_A.norm_p(1);
    passed &= eig_vec_A.norm_p(2) == vec_A.norm_p(2);
    passed &= eig_mat_A.norm_p(2) == mat_A.norm_p(2);
    test.boolean("EigenMatrix::norm_p(double p) const", passed);
    test.boolean("EigenMatrix::norm_2(void) const", eig_vec_A.norm_2() == vec_A.norm_2() && eig_mat_A.norm_2() == mat_A.norm_2());
    test.boolean("EigenMatrix::norm_inf(void) const", eig_vec_A.norm_inf() == vec_A.norm_inf() && eig_mat_A.norm_inf() == mat_A.norm_inf());
  }

  return 0;
}