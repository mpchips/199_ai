/**
  ******************************************************************************
  * @file    clf_svc.c
  * @author  AST Embedded Analytics Research Platform
  * @date    2025-12-15T00:48:58+0800
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */


#include "clf_svc.h"
#include "clf_svc_data.h"

#include "ai_platform.h"
#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"



#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_clf_svc
 
#undef AI_CLF_SVC_MODEL_SIGNATURE
#define AI_CLF_SVC_MODEL_SIGNATURE     "0xb0eff165bdf5bae9693d527309d67aa9"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "2025-12-15T00:48:58+0800"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_CLF_SVC_N_BATCHES
#define AI_CLF_SVC_N_BATCHES         (1)

static ai_ptr g_clf_svc_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_clf_svc_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  spectrum_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 8, AI_STATIC)

/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  label_output0_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 1, AI_STATIC)

/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  label_output1_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 3, AI_STATIC)

/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  neg_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 3, AI_STATIC)

/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  negative_output_array, AI_ARRAY_FORMAT_BOOL,
  NULL, NULL, 3, AI_STATIC)

/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  inegative_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 3, AI_STATIC)

/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  Vsvcv_0_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  Vnegv_0_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  Vnegv1_0_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  Csvc_0_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  Cneg_0_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  Vsvcv_2_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  Vnegv_2_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  Vnegv1_2_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  svcvote_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  Csvc_2_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  Cneg_2_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  svcsumc_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  Vsvcv_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  svcvote_2_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  Vnegv_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  Vnegv1_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  svcvote_0_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  Vsvcconcv_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 3, AI_STATIC)

/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  Csvc_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  svcsumc_2_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  Cneg_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  svcsumc_0_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  Csvcconc_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 3, AI_STATIC)

/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  Cabs_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 3, AI_STATIC)

/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  Cconc_abs1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 3, AI_STATIC)

/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  Csvcfinal_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 3, AI_STATIC)

/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  probabilities_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 3, AI_STATIC)

/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  cst0_2D_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  label_coefficients_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1100, AI_STATIC)

/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  label_support_vectors_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4400, AI_STATIC)

/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  label_rho_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 3, AI_STATIC)

/* Array#37 */
AI_ARRAY_OBJ_DECLARE(
  label_classlabels_ints_array, AI_ARRAY_FORMAT_U8,
  NULL, NULL, 3, AI_STATIC)

/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  label_vectors_per_class_array, AI_ARRAY_FORMAT_U16,
  NULL, NULL, 3, AI_STATIC)

/* Array#39 */
AI_ARRAY_OBJ_DECLARE(
  Cind_0_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 1, AI_STATIC)

/* Array#40 */
AI_ARRAY_OBJ_DECLARE(
  Vnegv1_0_scale_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#41 */
AI_ARRAY_OBJ_DECLARE(
  Vnegv1_0_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#42 */
AI_ARRAY_OBJ_DECLARE(
  Cind_2_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 1, AI_STATIC)

/* Array#43 */
AI_ARRAY_OBJ_DECLARE(
  Cind_1_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 1, AI_STATIC)

/* Array#44 */
AI_ARRAY_OBJ_DECLARE(
  Cconc_abs1_scale_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 3, AI_STATIC)

/* Array#45 */
AI_ARRAY_OBJ_DECLARE(
  Cconc_abs1_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 3, AI_STATIC)

/* Array#46 */
AI_ARRAY_OBJ_DECLARE(
  label_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 574, AI_STATIC)

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  Cabs_output, AI_STATIC,
  0, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &Cabs_output_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  Cconc_abs1_bias, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &Cconc_abs1_bias_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  Cconc_abs1_output, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &Cconc_abs1_output_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  Cconc_abs1_scale, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &Cconc_abs1_scale_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  Cind_0, AI_STATIC,
  4, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Cind_0_array, NULL)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  Cind_1, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Cind_1_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  Cind_2, AI_STATIC,
  6, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Cind_2_array, NULL)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  Cneg_0_output, AI_STATIC,
  7, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Cneg_0_output_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  Cneg_1_output, AI_STATIC,
  8, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Cneg_1_output_array, NULL)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  Cneg_2_output, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Cneg_2_output_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  Csvc_0_output, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Csvc_0_output_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  Csvc_1_output, AI_STATIC,
  11, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Csvc_1_output_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  Csvc_2_output, AI_STATIC,
  12, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Csvc_2_output_array, NULL)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  Csvcconc_output, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &Csvcconc_output_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  Csvcfinal_output, AI_STATIC,
  14, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &Csvcfinal_output_array, NULL)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  Vnegv1_0_bias, AI_STATIC,
  15, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Vnegv1_0_bias_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  Vnegv1_0_output, AI_STATIC,
  16, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Vnegv1_0_output_array, NULL)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  Vnegv1_0_scale, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Vnegv1_0_scale_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  Vnegv1_1_output, AI_STATIC,
  18, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Vnegv1_1_output_array, NULL)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  Vnegv1_2_output, AI_STATIC,
  19, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Vnegv1_2_output_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  Vnegv_0_output, AI_STATIC,
  20, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Vnegv_0_output_array, NULL)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  Vnegv_1_output, AI_STATIC,
  21, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Vnegv_1_output_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  Vnegv_2_output, AI_STATIC,
  22, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Vnegv_2_output_array, NULL)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  Vsvcconcv_output, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &Vsvcconcv_output_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  Vsvcv_0_output, AI_STATIC,
  24, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Vsvcv_0_output_array, NULL)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  Vsvcv_1_output, AI_STATIC,
  25, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Vsvcv_1_output_array, NULL)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  Vsvcv_2_output, AI_STATIC,
  26, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &Vsvcv_2_output_array, NULL)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  cst0_2D, AI_STATIC,
  27, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &cst0_2D_array, NULL)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  inegative_output, AI_STATIC,
  28, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &inegative_output_array, NULL)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  label_classlabels_ints, AI_STATIC,
  29, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3, 3),
  1, &label_classlabels_ints_array, NULL)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  label_coefficients, AI_STATIC,
  30, 0x0,
  AI_SHAPE_INIT(4, 1, 1100, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4400, 4400),
  1, &label_coefficients_array, NULL)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  label_output0, AI_STATIC,
  31, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &label_output0_array, NULL)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  label_output1, AI_STATIC,
  32, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &label_output1_array, NULL)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  label_rho, AI_STATIC,
  33, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &label_rho_array, NULL)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  label_scratch0, AI_STATIC,
  34, 0x0,
  AI_SHAPE_INIT(4, 1, 574, 1, 1), AI_STRIDE_INIT(4, 4, 4, 2296, 2296),
  1, &label_scratch0_array, NULL)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  label_support_vectors, AI_STATIC,
  35, 0x0,
  AI_SHAPE_INIT(4, 1, 4400, 1, 1), AI_STRIDE_INIT(4, 4, 4, 17600, 17600),
  1, &label_support_vectors_array, NULL)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  label_vectors_per_class, AI_STATIC,
  36, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 2, 2, 6, 6),
  1, &label_vectors_per_class_array, NULL)

/* Tensor #37 */
AI_TENSOR_OBJ_DECLARE(
  neg_output, AI_STATIC,
  37, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &neg_output_array, NULL)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  negative_output, AI_STATIC,
  38, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3, 3),
  1, &negative_output_array, NULL)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  probabilities_output, AI_STATIC,
  39, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &probabilities_output_array, NULL)

/* Tensor #40 */
AI_TENSOR_OBJ_DECLARE(
  spectrum_output, AI_STATIC,
  40, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &spectrum_output_array, NULL)

/* Tensor #41 */
AI_TENSOR_OBJ_DECLARE(
  svcsumc_0_output, AI_STATIC,
  41, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &svcsumc_0_output_array, NULL)

/* Tensor #42 */
AI_TENSOR_OBJ_DECLARE(
  svcsumc_1_output, AI_STATIC,
  42, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &svcsumc_1_output_array, NULL)

/* Tensor #43 */
AI_TENSOR_OBJ_DECLARE(
  svcsumc_2_output, AI_STATIC,
  43, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &svcsumc_2_output_array, NULL)

/* Tensor #44 */
AI_TENSOR_OBJ_DECLARE(
  svcvote_0_output, AI_STATIC,
  44, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &svcvote_0_output_array, NULL)

/* Tensor #45 */
AI_TENSOR_OBJ_DECLARE(
  svcvote_1_output, AI_STATIC,
  45, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &svcvote_1_output_array, NULL)

/* Tensor #46 */
AI_TENSOR_OBJ_DECLARE(
  svcvote_2_output, AI_STATIC,
  46, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &svcvote_2_output_array, NULL)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  probabilities_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &Vsvcconcv_output, &Csvcfinal_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &probabilities_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  probabilities_layer, 33,
  ELTWISE_TYPE, 0x0, NULL,
  eltwise, forward_eltwise,
  &probabilities_chain,
  NULL, &probabilities_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_f32, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Csvcfinal_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &Csvcconc_output, &Cconc_abs1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Csvcfinal_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Csvcfinal_layer, 32,
  ELTWISE_TYPE, 0x0, NULL,
  eltwise, forward_eltwise,
  &Csvcfinal_chain,
  NULL, &probabilities_layer, AI_STATIC, 
  .operation = ai_div_f32, 
  .buffer_operation = ai_div_buffer_f32, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Cconc_abs1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Cabs_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Cconc_abs1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &Cconc_abs1_scale, &Cconc_abs1_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Cconc_abs1_layer, 31,
  BN_TYPE, 0x0, NULL,
  bn, forward_bn,
  &Cconc_abs1_chain,
  NULL, &Csvcfinal_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Cabs_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Csvcconc_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Cabs_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Cabs_layer, 26,
  NL_TYPE, 0x0, NULL,
  nl, forward_abs,
  &Cabs_chain,
  NULL, &Cconc_abs1_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Csvcconc_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &svcsumc_0_output, &svcsumc_1_output, &svcsumc_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Csvcconc_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Csvcconc_layer, 25,
  CONCAT_TYPE, 0x0, NULL,
  concat, forward_concat,
  &Csvcconc_chain,
  NULL, &Cabs_layer, AI_STATIC, 
  .axis = AI_SHAPE_CHANNEL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  svcsumc_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &Cneg_0_output, &Cneg_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &svcsumc_0_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  svcsumc_0_layer, 19,
  ELTWISE_TYPE, 0x0, NULL,
  eltwise, forward_eltwise,
  &svcsumc_0_chain,
  NULL, &Csvcconc_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_f32, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Cneg_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Csvc_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Cneg_1_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Cneg_1_layer, 12,
  NL_TYPE, 0x0, NULL,
  nl, forward_neg,
  &Cneg_1_chain,
  NULL, &svcsumc_0_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  svcsumc_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &Csvc_1_output, &Csvc_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &svcsumc_2_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  svcsumc_2_layer, 15,
  ELTWISE_TYPE, 0x0, NULL,
  eltwise, forward_eltwise,
  &svcsumc_2_chain,
  NULL, &Cneg_1_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_f32, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Csvc_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &neg_output, &Cind_1),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Csvc_1_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Csvc_1_layer, 6,
  ARRAYFEATUREEXTRACTOR_TYPE, 0x0, NULL,
  arrayfeatureextractor, forward_arrayfeatureextractor,
  &Csvc_1_chain,
  NULL, &svcsumc_2_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Vsvcconcv_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &svcvote_0_output, &svcvote_1_output, &svcvote_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vsvcconcv_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Vsvcconcv_layer, 30,
  CONCAT_TYPE, 0x0, NULL,
  concat, forward_concat,
  &Vsvcconcv_chain,
  NULL, &Csvc_1_layer, AI_STATIC, 
  .axis = AI_SHAPE_CHANNEL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  svcvote_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &Vnegv1_0_output, &Vnegv1_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &svcvote_0_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  svcvote_0_layer, 27,
  ELTWISE_TYPE, 0x0, NULL,
  eltwise, forward_eltwise,
  &svcvote_0_chain,
  NULL, &Vsvcconcv_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_f32, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Vnegv1_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vnegv_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vnegv1_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &Vnegv1_0_scale, &Vnegv1_0_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Vnegv1_1_layer, 23,
  BN_TYPE, 0x0, NULL,
  bn, forward_bn,
  &Vnegv1_1_chain,
  NULL, &svcvote_0_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Vnegv_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vsvcv_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vnegv_1_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Vnegv_1_layer, 17,
  NL_TYPE, 0x0, NULL,
  nl, forward_neg,
  &Vnegv_1_chain,
  NULL, &Vnegv1_1_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  svcvote_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &Vsvcv_1_output, &Vsvcv_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &svcvote_2_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  svcvote_2_layer, 21,
  ELTWISE_TYPE, 0x0, NULL,
  eltwise, forward_eltwise,
  &svcvote_2_chain,
  NULL, &Vnegv_1_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_f32, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Vsvcv_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &inegative_output, &Cind_1),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vsvcv_1_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Vsvcv_1_layer, 10,
  ARRAYFEATUREEXTRACTOR_TYPE, 0x0, NULL,
  arrayfeatureextractor, forward_arrayfeatureextractor,
  &Vsvcv_1_chain,
  NULL, &svcvote_2_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  svcsumc_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &Csvc_0_output, &Cneg_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &svcsumc_1_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  svcsumc_1_layer, 20,
  ELTWISE_TYPE, 0x0, NULL,
  eltwise, forward_eltwise,
  &svcsumc_1_chain,
  NULL, &Vsvcv_1_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_f32, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Cneg_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Csvc_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Cneg_2_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Cneg_2_layer, 13,
  NL_TYPE, 0x0, NULL,
  nl, forward_neg,
  &Cneg_2_chain,
  NULL, &svcsumc_1_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Csvc_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &neg_output, &Cind_2),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Csvc_2_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Csvc_2_layer, 7,
  ARRAYFEATUREEXTRACTOR_TYPE, 0x0, NULL,
  arrayfeatureextractor, forward_arrayfeatureextractor,
  &Csvc_2_chain,
  NULL, &Cneg_2_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  svcvote_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &Vsvcv_0_output, &Vnegv1_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &svcvote_1_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  svcvote_1_layer, 28,
  ELTWISE_TYPE, 0x0, NULL,
  eltwise, forward_eltwise,
  &svcvote_1_chain,
  NULL, &Csvc_2_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_f32, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Vnegv1_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vnegv_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vnegv1_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &Vnegv1_0_scale, &Vnegv1_0_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Vnegv1_2_layer, 24,
  BN_TYPE, 0x0, NULL,
  bn, forward_bn,
  &Vnegv1_2_chain,
  NULL, &svcvote_1_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Vnegv_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vsvcv_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vnegv_2_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Vnegv_2_layer, 18,
  NL_TYPE, 0x0, NULL,
  nl, forward_neg,
  &Vnegv_2_chain,
  NULL, &Vnegv1_2_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Vsvcv_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &inegative_output, &Cind_2),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vsvcv_2_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Vsvcv_2_layer, 11,
  ARRAYFEATUREEXTRACTOR_TYPE, 0x0, NULL,
  arrayfeatureextractor, forward_arrayfeatureextractor,
  &Vsvcv_2_chain,
  NULL, &Vnegv_2_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Cneg_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Csvc_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Cneg_0_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Cneg_0_layer, 14,
  NL_TYPE, 0x0, NULL,
  nl, forward_neg,
  &Cneg_0_chain,
  NULL, &Vsvcv_2_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Csvc_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &neg_output, &Cind_0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Csvc_0_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Csvc_0_layer, 8,
  ARRAYFEATUREEXTRACTOR_TYPE, 0x0, NULL,
  arrayfeatureextractor, forward_arrayfeatureextractor,
  &Csvc_0_chain,
  NULL, &Cneg_0_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Vnegv1_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vnegv_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vnegv1_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &Vnegv1_0_scale, &Vnegv1_0_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Vnegv1_0_layer, 22,
  BN_TYPE, 0x0, NULL,
  bn, forward_bn,
  &Vnegv1_0_chain,
  NULL, &Csvc_0_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Vnegv_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vsvcv_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vnegv_0_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Vnegv_0_layer, 16,
  NL_TYPE, 0x0, NULL,
  nl, forward_neg,
  &Vnegv_0_chain,
  NULL, &Vnegv1_0_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  Vsvcv_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &inegative_output, &Cind_0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Vsvcv_0_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  Vsvcv_0_layer, 9,
  ARRAYFEATUREEXTRACTOR_TYPE, 0x0, NULL,
  arrayfeatureextractor, forward_arrayfeatureextractor,
  &Vsvcv_0_chain,
  NULL, &Vnegv_0_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  inegative_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &negative_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &inegative_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  inegative_layer, 5,
  CAST_TYPE, 0x0, NULL,
  cast, forward_cast,
  &inegative_chain,
  NULL, &Vsvcv_0_layer, AI_STATIC, 
  .to_format = AI_ARRAY_FORMAT_FLOAT, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  negative_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &label_output1, &cst0_2D),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &negative_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  negative_layer, 3,
  ELTWISE_TYPE, 0x0, NULL,
  eltwise, forward_eltwise,
  &negative_chain,
  NULL, &inegative_layer, AI_STATIC, 
  .operation = ai_less, 
  .buffer_operation = ai_less_buffer, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  neg_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &label_output1),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &neg_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  neg_layer, 4,
  NL_TYPE, 0x0, NULL,
  nl, forward_neg,
  &neg_chain,
  NULL, &negative_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  label_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &spectrum_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &label_output0, &label_output1),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 5, &label_coefficients, &label_support_vectors, &label_rho, &label_classlabels_ints, &label_vectors_per_class),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &label_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  label_layer, 1,
  SVC_TYPE, 0x0, NULL,
  svc, forward_svc,
  &label_chain,
  NULL, &neg_layer, AI_STATIC, 
  .kernel_type = AI_SVC_KERNEL_RBF, 
  .gamma = 79.81138610839844, 
  .coef0 = 0.0, 
  .degree = 3.0, 
  .proba_support = 0, 
  .has_classlabels_int = 1, 
)


#if (AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 22072, 1, 1),
    22072, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 2344, 1, 1),
    2344, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_CLF_SVC_IN_NUM, &spectrum_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_CLF_SVC_OUT_NUM, &label_output0, &probabilities_output),
  &label_layer, 0x123df4f6, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 22072, 1, 1),
      22072, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 2344, 1, 1),
      2344, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_CLF_SVC_IN_NUM, &spectrum_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_CLF_SVC_OUT_NUM, &label_output0, &probabilities_output),
  &label_layer, 0x123df4f6, NULL)

#endif	/*(AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)*/



/******************************************************************************/
AI_DECLARE_STATIC
ai_bool clf_svc_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_activations_map(g_clf_svc_activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    
    spectrum_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 0);
    spectrum_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 0);
    label_scratch0_array.data = AI_PTR(g_clf_svc_activations_map[0] + 32);
    label_scratch0_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 32);
    label_output0_array.data = AI_PTR(g_clf_svc_activations_map[0] + 2328);
    label_output0_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 2328);
    label_output1_array.data = AI_PTR(g_clf_svc_activations_map[0] + 2332);
    label_output1_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 2332);
    neg_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 0);
    neg_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 0);
    negative_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 12);
    negative_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 12);
    inegative_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 16);
    inegative_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 16);
    Vsvcv_0_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 12);
    Vsvcv_0_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 12);
    Vnegv_0_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 28);
    Vnegv_0_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 28);
    Vnegv1_0_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 32);
    Vnegv1_0_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 32);
    Csvc_0_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 28);
    Csvc_0_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 28);
    Cneg_0_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 36);
    Cneg_0_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 36);
    Vsvcv_2_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 40);
    Vsvcv_2_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 40);
    Vnegv_2_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 44);
    Vnegv_2_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 44);
    Vnegv1_2_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 48);
    Vnegv1_2_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 48);
    svcvote_1_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 44);
    svcvote_1_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 44);
    Csvc_2_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 12);
    Csvc_2_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 12);
    Cneg_2_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 48);
    Cneg_2_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 48);
    svcsumc_1_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 52);
    svcsumc_1_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 52);
    Vsvcv_1_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 28);
    Vsvcv_1_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 28);
    svcvote_2_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 16);
    svcvote_2_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 16);
    Vnegv_1_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 20);
    Vnegv_1_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 20);
    Vnegv1_1_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 24);
    Vnegv1_1_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 24);
    svcvote_0_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 20);
    svcvote_0_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 20);
    Vsvcconcv_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 24);
    Vsvcconcv_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 24);
    Csvc_1_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 16);
    Csvc_1_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 16);
    svcsumc_2_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 0);
    svcsumc_2_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 0);
    Cneg_1_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 4);
    Cneg_1_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 4);
    svcsumc_0_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 8);
    svcsumc_0_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 8);
    Csvcconc_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 12);
    Csvcconc_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 12);
    Cabs_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 0);
    Cabs_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 0);
    Cconc_abs1_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 36);
    Cconc_abs1_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 36);
    Csvcfinal_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 0);
    Csvcfinal_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 0);
    probabilities_output_array.data = AI_PTR(g_clf_svc_activations_map[0] + 12);
    probabilities_output_array.data_start = AI_PTR(g_clf_svc_activations_map[0] + 12);
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_ACTIVATIONS);
  return false;
}




/******************************************************************************/
AI_DECLARE_STATIC
ai_bool clf_svc_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_weights_map(g_clf_svc_weights_map, 1, params)) {
    /* Updating weights (byte) offsets */
    
    cst0_2D_array.format |= AI_FMT_FLAG_CONST;
    cst0_2D_array.data = AI_PTR(g_clf_svc_weights_map[0] + 0);
    cst0_2D_array.data_start = AI_PTR(g_clf_svc_weights_map[0] + 0);
    label_coefficients_array.format |= AI_FMT_FLAG_CONST;
    label_coefficients_array.data = AI_PTR(g_clf_svc_weights_map[0] + 4);
    label_coefficients_array.data_start = AI_PTR(g_clf_svc_weights_map[0] + 4);
    label_support_vectors_array.format |= AI_FMT_FLAG_CONST;
    label_support_vectors_array.data = AI_PTR(g_clf_svc_weights_map[0] + 4404);
    label_support_vectors_array.data_start = AI_PTR(g_clf_svc_weights_map[0] + 4404);
    label_rho_array.format |= AI_FMT_FLAG_CONST;
    label_rho_array.data = AI_PTR(g_clf_svc_weights_map[0] + 22004);
    label_rho_array.data_start = AI_PTR(g_clf_svc_weights_map[0] + 22004);
    label_classlabels_ints_array.format |= AI_FMT_FLAG_CONST;
    label_classlabels_ints_array.data = AI_PTR(g_clf_svc_weights_map[0] + 22016);
    label_classlabels_ints_array.data_start = AI_PTR(g_clf_svc_weights_map[0] + 22016);
    label_vectors_per_class_array.format |= AI_FMT_FLAG_CONST;
    label_vectors_per_class_array.data = AI_PTR(g_clf_svc_weights_map[0] + 22020);
    label_vectors_per_class_array.data_start = AI_PTR(g_clf_svc_weights_map[0] + 22020);
    Cind_0_array.format |= AI_FMT_FLAG_CONST;
    Cind_0_array.data = AI_PTR(g_clf_svc_weights_map[0] + 22028);
    Cind_0_array.data_start = AI_PTR(g_clf_svc_weights_map[0] + 22028);
    Vnegv1_0_scale_array.format |= AI_FMT_FLAG_CONST;
    Vnegv1_0_scale_array.data = AI_PTR(g_clf_svc_weights_map[0] + 22032);
    Vnegv1_0_scale_array.data_start = AI_PTR(g_clf_svc_weights_map[0] + 22032);
    Vnegv1_0_bias_array.format |= AI_FMT_FLAG_CONST;
    Vnegv1_0_bias_array.data = AI_PTR(g_clf_svc_weights_map[0] + 22036);
    Vnegv1_0_bias_array.data_start = AI_PTR(g_clf_svc_weights_map[0] + 22036);
    Cind_2_array.format |= AI_FMT_FLAG_CONST;
    Cind_2_array.data = AI_PTR(g_clf_svc_weights_map[0] + 22040);
    Cind_2_array.data_start = AI_PTR(g_clf_svc_weights_map[0] + 22040);
    Cind_1_array.format |= AI_FMT_FLAG_CONST;
    Cind_1_array.data = AI_PTR(g_clf_svc_weights_map[0] + 22044);
    Cind_1_array.data_start = AI_PTR(g_clf_svc_weights_map[0] + 22044);
    Cconc_abs1_scale_array.format |= AI_FMT_FLAG_CONST;
    Cconc_abs1_scale_array.data = AI_PTR(g_clf_svc_weights_map[0] + 22048);
    Cconc_abs1_scale_array.data_start = AI_PTR(g_clf_svc_weights_map[0] + 22048);
    Cconc_abs1_bias_array.format |= AI_FMT_FLAG_CONST;
    Cconc_abs1_bias_array.data = AI_PTR(g_clf_svc_weights_map[0] + 22060);
    Cconc_abs1_bias_array.data_start = AI_PTR(g_clf_svc_weights_map[0] + 22060);
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_WEIGHTS);
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/



AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_clf_svc_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_CLF_SVC_MODEL_NAME,
      .model_signature   = AI_CLF_SVC_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 44060,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x123df4f6,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}



AI_API_ENTRY
ai_bool ai_clf_svc_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_CLF_SVC_MODEL_NAME,
      .model_signature   = AI_CLF_SVC_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 44060,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x123df4f6,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}


AI_API_ENTRY
ai_error ai_clf_svc_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}


AI_API_ENTRY
ai_error ai_clf_svc_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    AI_CONTEXT_OBJ(&AI_NET_OBJ_INSTANCE),
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}


AI_API_ENTRY
ai_error ai_clf_svc_create_and_init(
  ai_handle* network, const ai_handle activations[], const ai_handle weights[])
{
  ai_error err;
  ai_network_params params;

  err = ai_clf_svc_create(network, AI_CLF_SVC_DATA_CONFIG);
  if (err.type != AI_ERROR_NONE) {
    return err;
  }
  
  if (ai_clf_svc_data_params_get(&params) != true) {
    err = ai_clf_svc_get_error(*network);
    return err;
  }
#if defined(AI_CLF_SVC_DATA_ACTIVATIONS_COUNT)
  /* set the addresses of the activations buffers */
  for (ai_u16 idx=0; activations && idx<params.map_activations.size; idx++) {
    AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_activations, idx, activations[idx]);
  }
#endif
#if defined(AI_CLF_SVC_DATA_WEIGHTS_COUNT)
  /* set the addresses of the weight buffers */
  for (ai_u16 idx=0; weights && idx<params.map_weights.size; idx++) {
    AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_weights, idx, weights[idx]);
  }
#endif
  if (ai_clf_svc_init(*network, &params) != true) {
    err = ai_clf_svc_get_error(*network);
  }
  return err;
}


AI_API_ENTRY
ai_buffer* ai_clf_svc_inputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    AI_NETWORK_OBJ(network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_inputs_get(network, n_buffer);
}


AI_API_ENTRY
ai_buffer* ai_clf_svc_outputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    AI_NETWORK_OBJ(network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_outputs_get(network, n_buffer);
}


AI_API_ENTRY
ai_handle ai_clf_svc_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}


AI_API_ENTRY
ai_bool ai_clf_svc_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = AI_NETWORK_OBJ(ai_platform_network_init(network, params));
  ai_bool ok = true;

  if (!net_ctx) return false;
  ok &= clf_svc_configure_weights(net_ctx, params);
  ok &= clf_svc_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_clf_svc_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}


AI_API_ENTRY
ai_i32 ai_clf_svc_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_CLF_SVC_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

