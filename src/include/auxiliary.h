/*******************************************************************************
 * Copyright (c) 2017, College of William & Mary
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the College of William & Mary nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COLLEGE OF WILLIAM & MARY BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * PRIMME: https://github.com/primme/primme
 * Contact: Andreas Stathopoulos, a n d r e a s _at_ c s . w m . e d u
 *******************************************************************************
 *   NOTE: THIS FILE IS AUTOMATICALLY GENERATED. PLEASE DON'T MODIFY
 ******************************************************************************/


#ifndef auxiliary_H
#define auxiliary_H
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_matrix_Sprimme)
#  define Num_copy_matrix_Sprimme CONCAT(Num_copy_matrix_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_matrix_Rprimme)
#  define Num_copy_matrix_Rprimme CONCAT(Num_copy_matrix_,REAL_SUF)
#endif
void Num_copy_matrix_dprimme(double *x, int64_t m, int64_t n, int64_t
      ldx, double *y, int64_t ldy);
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_matrix_columns_Sprimme)
#  define Num_copy_matrix_columns_Sprimme CONCAT(Num_copy_matrix_columns_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_matrix_columns_Rprimme)
#  define Num_copy_matrix_columns_Rprimme CONCAT(Num_copy_matrix_columns_,REAL_SUF)
#endif
void Num_copy_matrix_columns_dprimme(double *x, int64_t m, int *xin, int n,
      int64_t ldx, double *y, int *yin, int64_t ldy);
#if !defined(CHECK_TEMPLATE) && !defined(Num_zero_matrix_Sprimme)
#  define Num_zero_matrix_Sprimme CONCAT(Num_zero_matrix_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_zero_matrix_Rprimme)
#  define Num_zero_matrix_Rprimme CONCAT(Num_zero_matrix_,REAL_SUF)
#endif
void Num_zero_matrix_dprimme(double *x, int64_t m, int64_t n,
      int64_t ldx);
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_trimatrix_Sprimme)
#  define Num_copy_trimatrix_Sprimme CONCAT(Num_copy_trimatrix_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_trimatrix_Rprimme)
#  define Num_copy_trimatrix_Rprimme CONCAT(Num_copy_trimatrix_,REAL_SUF)
#endif
void Num_copy_trimatrix_dprimme(double *x, int m, int n, int ldx, int ul,
      int i0, double *y, int ldy, int zero);
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_trimatrix_compact_Sprimme)
#  define Num_copy_trimatrix_compact_Sprimme CONCAT(Num_copy_trimatrix_compact_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_trimatrix_compact_Rprimme)
#  define Num_copy_trimatrix_compact_Rprimme CONCAT(Num_copy_trimatrix_compact_,REAL_SUF)
#endif
void Num_copy_trimatrix_compact_dprimme(double *x, int64_t m, int n,
      int64_t ldx, int i0, double *y, int *ly);
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_compact_trimatrix_Sprimme)
#  define Num_copy_compact_trimatrix_Sprimme CONCAT(Num_copy_compact_trimatrix_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_compact_trimatrix_Rprimme)
#  define Num_copy_compact_trimatrix_Rprimme CONCAT(Num_copy_compact_trimatrix_,REAL_SUF)
#endif
void Num_copy_compact_trimatrix_dprimme(double *x, int64_t m, int n, int i0,
      double *y, int ldy);
#if !defined(CHECK_TEMPLATE) && !defined(permute_vecs_Sprimme)
#  define permute_vecs_Sprimme CONCAT(permute_vecs_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(permute_vecs_Rprimme)
#  define permute_vecs_Rprimme CONCAT(permute_vecs_,REAL_SUF)
#endif
void permute_vecs_dprimme(double *vecs, int64_t m, int n, int64_t ld,
      int *perm_, double *rwork, int *iwork);
#if !defined(CHECK_TEMPLATE) && !defined(permute_vecs_iprimmeSprimme)
#  define permute_vecs_iprimmeSprimme CONCAT(permute_vecs_iprimme,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(permute_vecs_iprimmeRprimme)
#  define permute_vecs_iprimmeRprimme CONCAT(permute_vecs_iprimme,REAL_SUF)
#endif
void permute_vecs_iprimme(int *vecs, int n, int *perm_, int *iwork);
#if !defined(CHECK_TEMPLATE) && !defined(Num_compact_vecs_Sprimme)
#  define Num_compact_vecs_Sprimme CONCAT(Num_compact_vecs_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_compact_vecs_Rprimme)
#  define Num_compact_vecs_Rprimme CONCAT(Num_compact_vecs_,REAL_SUF)
#endif
double* Num_compact_vecs_dprimme(double *vecs, int64_t m, int n,
      int64_t ld, int *perm, double *work, int64_t ldwork,
      int avoidCopy);
#if !defined(CHECK_TEMPLATE) && !defined(compute_submatrix_Sprimme)
#  define compute_submatrix_Sprimme CONCAT(compute_submatrix_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(compute_submatrix_Rprimme)
#  define compute_submatrix_Rprimme CONCAT(compute_submatrix_,REAL_SUF)
#endif
int compute_submatrix_dprimme(double *X, int nX, int ldX,
   double *H, int nH, int ldH, double *R, int ldR,
   double *rwork, size_t *lrwork);
void Num_copy_matrix_zprimme(PRIMME_COMPLEX_DOUBLE *x, int64_t m, int64_t n, int64_t
      ldx, PRIMME_COMPLEX_DOUBLE *y, int64_t ldy);
void Num_copy_matrix_columns_zprimme(PRIMME_COMPLEX_DOUBLE *x, int64_t m, int *xin, int n,
      int64_t ldx, PRIMME_COMPLEX_DOUBLE *y, int *yin, int64_t ldy);
void Num_zero_matrix_zprimme(PRIMME_COMPLEX_DOUBLE *x, int64_t m, int64_t n,
      int64_t ldx);
void Num_copy_trimatrix_zprimme(PRIMME_COMPLEX_DOUBLE *x, int m, int n, int ldx, int ul,
      int i0, PRIMME_COMPLEX_DOUBLE *y, int ldy, int zero);
void Num_copy_trimatrix_compact_zprimme(PRIMME_COMPLEX_DOUBLE *x, int64_t m, int n,
      int64_t ldx, int i0, PRIMME_COMPLEX_DOUBLE *y, int *ly);
void Num_copy_compact_trimatrix_zprimme(PRIMME_COMPLEX_DOUBLE *x, int64_t m, int n, int i0,
      PRIMME_COMPLEX_DOUBLE *y, int ldy);
void permute_vecs_zprimme(PRIMME_COMPLEX_DOUBLE *vecs, int64_t m, int n, int64_t ld,
      int *perm_, PRIMME_COMPLEX_DOUBLE *rwork, int *iwork);
PRIMME_COMPLEX_DOUBLE* Num_compact_vecs_zprimme(PRIMME_COMPLEX_DOUBLE *vecs, int64_t m, int n,
      int64_t ld, int *perm, PRIMME_COMPLEX_DOUBLE *work, int64_t ldwork,
      int avoidCopy);
int compute_submatrix_zprimme(PRIMME_COMPLEX_DOUBLE *X, int nX, int ldX,
   PRIMME_COMPLEX_DOUBLE *H, int nH, int ldH, PRIMME_COMPLEX_DOUBLE *R, int ldR,
   PRIMME_COMPLEX_DOUBLE *rwork, size_t *lrwork);
void Num_copy_matrix_sprimme(float *x, int64_t m, int64_t n, int64_t
      ldx, float *y, int64_t ldy);
void Num_copy_matrix_columns_sprimme(float *x, int64_t m, int *xin, int n,
      int64_t ldx, float *y, int *yin, int64_t ldy);
void Num_zero_matrix_sprimme(float *x, int64_t m, int64_t n,
      int64_t ldx);
void Num_copy_trimatrix_sprimme(float *x, int m, int n, int ldx, int ul,
      int i0, float *y, int ldy, int zero);
void Num_copy_trimatrix_compact_sprimme(float *x, int64_t m, int n,
      int64_t ldx, int i0, float *y, int *ly);
void Num_copy_compact_trimatrix_sprimme(float *x, int64_t m, int n, int i0,
      float *y, int ldy);
void permute_vecs_sprimme(float *vecs, int64_t m, int n, int64_t ld,
      int *perm_, float *rwork, int *iwork);
float* Num_compact_vecs_sprimme(float *vecs, int64_t m, int n,
      int64_t ld, int *perm, float *work, int64_t ldwork,
      int avoidCopy);
int compute_submatrix_sprimme(float *X, int nX, int ldX,
   float *H, int nH, int ldH, float *R, int ldR,
   float *rwork, size_t *lrwork);
void Num_copy_matrix_cprimme(PRIMME_COMPLEX_FLOAT *x, int64_t m, int64_t n, int64_t
      ldx, PRIMME_COMPLEX_FLOAT *y, int64_t ldy);
void Num_copy_matrix_columns_cprimme(PRIMME_COMPLEX_FLOAT *x, int64_t m, int *xin, int n,
      int64_t ldx, PRIMME_COMPLEX_FLOAT *y, int *yin, int64_t ldy);
void Num_zero_matrix_cprimme(PRIMME_COMPLEX_FLOAT *x, int64_t m, int64_t n,
      int64_t ldx);
void Num_copy_trimatrix_cprimme(PRIMME_COMPLEX_FLOAT *x, int m, int n, int ldx, int ul,
      int i0, PRIMME_COMPLEX_FLOAT *y, int ldy, int zero);
void Num_copy_trimatrix_compact_cprimme(PRIMME_COMPLEX_FLOAT *x, int64_t m, int n,
      int64_t ldx, int i0, PRIMME_COMPLEX_FLOAT *y, int *ly);
void Num_copy_compact_trimatrix_cprimme(PRIMME_COMPLEX_FLOAT *x, int64_t m, int n, int i0,
      PRIMME_COMPLEX_FLOAT *y, int ldy);
void permute_vecs_cprimme(PRIMME_COMPLEX_FLOAT *vecs, int64_t m, int n, int64_t ld,
      int *perm_, PRIMME_COMPLEX_FLOAT *rwork, int *iwork);
PRIMME_COMPLEX_FLOAT* Num_compact_vecs_cprimme(PRIMME_COMPLEX_FLOAT *vecs, int64_t m, int n,
      int64_t ld, int *perm, PRIMME_COMPLEX_FLOAT *work, int64_t ldwork,
      int avoidCopy);
int compute_submatrix_cprimme(PRIMME_COMPLEX_FLOAT *X, int nX, int ldX,
   PRIMME_COMPLEX_FLOAT *H, int nH, int ldH, PRIMME_COMPLEX_FLOAT *R, int ldR,
   PRIMME_COMPLEX_FLOAT *rwork, size_t *lrwork);
#endif
