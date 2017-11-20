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


#ifndef ortho_H
#define ortho_H
#if !defined(CHECK_TEMPLATE) && !defined(ortho_Sprimme)
#  define ortho_Sprimme CONCAT(ortho_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(ortho_Rprimme)
#  define ortho_Rprimme CONCAT(ortho_,REAL_SUF)
#endif
int ortho_dprimme(double *basis, int64_t ldBasis, double *R,
      int64_t ldR, int b1, int b2, double *locked, int64_t ldLocked,
      int numLocked, int64_t nLocal, int64_t *iseed, double machEps,
      double *rwork, size_t *rworkSize, primme_params *primme);
#if !defined(CHECK_TEMPLATE) && !defined(ortho_single_iteration_Sprimme)
#  define ortho_single_iteration_Sprimme CONCAT(ortho_single_iteration_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(ortho_single_iteration_Rprimme)
#  define ortho_single_iteration_Rprimme CONCAT(ortho_single_iteration_,REAL_SUF)
#endif
int ortho_single_iteration_dprimme(double *Q, int64_t mQ, int64_t nQ,
      int64_t ldQ, double *X, int *inX, int nX, int64_t ldX,
      double *overlaps, double *norms, double *rwork, size_t *lrwork,
      primme_params *primme);
int ortho_zprimme(PRIMME_COMPLEX_DOUBLE *basis, int64_t ldBasis, PRIMME_COMPLEX_DOUBLE *R,
      int64_t ldR, int b1, int b2, PRIMME_COMPLEX_DOUBLE *locked, int64_t ldLocked,
      int numLocked, int64_t nLocal, int64_t *iseed, double machEps,
      PRIMME_COMPLEX_DOUBLE *rwork, size_t *rworkSize, primme_params *primme);
int ortho_single_iteration_zprimme(PRIMME_COMPLEX_DOUBLE *Q, int64_t mQ, int64_t nQ,
      int64_t ldQ, PRIMME_COMPLEX_DOUBLE *X, int *inX, int nX, int64_t ldX,
      double *overlaps, double *norms, PRIMME_COMPLEX_DOUBLE *rwork, size_t *lrwork,
      primme_params *primme);
int ortho_sprimme(float *basis, int64_t ldBasis, float *R,
      int64_t ldR, int b1, int b2, float *locked, int64_t ldLocked,
      int numLocked, int64_t nLocal, int64_t *iseed, double machEps,
      float *rwork, size_t *rworkSize, primme_params *primme);
int ortho_single_iteration_sprimme(float *Q, int64_t mQ, int64_t nQ,
      int64_t ldQ, float *X, int *inX, int nX, int64_t ldX,
      float *overlaps, float *norms, float *rwork, size_t *lrwork,
      primme_params *primme);
int ortho_cprimme(PRIMME_COMPLEX_FLOAT *basis, int64_t ldBasis, PRIMME_COMPLEX_FLOAT *R,
      int64_t ldR, int b1, int b2, PRIMME_COMPLEX_FLOAT *locked, int64_t ldLocked,
      int numLocked, int64_t nLocal, int64_t *iseed, double machEps,
      PRIMME_COMPLEX_FLOAT *rwork, size_t *rworkSize, primme_params *primme);
int ortho_single_iteration_cprimme(PRIMME_COMPLEX_FLOAT *Q, int64_t mQ, int64_t nQ,
      int64_t ldQ, PRIMME_COMPLEX_FLOAT *X, int *inX, int nX, int64_t ldX,
      float *overlaps, float *norms, PRIMME_COMPLEX_FLOAT *rwork, size_t *lrwork,
      primme_params *primme);
#endif
