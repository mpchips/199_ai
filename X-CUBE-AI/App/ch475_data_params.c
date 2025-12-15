/**
  ******************************************************************************
  * @file    ch475_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    2025-12-15T00:45:44+0800
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "ch475_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_ch475_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_ch475_weights_array_u64[1] = {
  0x3a518c5f3eab0299U,
};


ai_handle g_ch475_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_ch475_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

