/**
  ******************************************************************************
  * @file    ch690_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    2025-12-17T00:10:16+0800
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

#ifndef CH690_DATA_PARAMS_H
#define CH690_DATA_PARAMS_H

#include "ai_platform.h"

/*
#define AI_CH690_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_ch690_data_weights_params[1]))
*/

#define AI_CH690_DATA_CONFIG               (NULL)


#define AI_CH690_DATA_ACTIVATIONS_SIZES \
  { 8, }
#define AI_CH690_DATA_ACTIVATIONS_SIZE     (8)
#define AI_CH690_DATA_ACTIVATIONS_COUNT    (1)
#define AI_CH690_DATA_ACTIVATION_1_SIZE    (8)



#define AI_CH690_DATA_WEIGHTS_SIZES \
  { 8, }
#define AI_CH690_DATA_WEIGHTS_SIZE         (8)
#define AI_CH690_DATA_WEIGHTS_COUNT        (1)
#define AI_CH690_DATA_WEIGHT_1_SIZE        (8)



#define AI_CH690_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_ch690_activations_table[1])

extern ai_handle g_ch690_activations_table[1 + 2];



#define AI_CH690_DATA_WEIGHTS_TABLE_GET() \
  (&g_ch690_weights_table[1])

extern ai_handle g_ch690_weights_table[1 + 2];


#endif    /* CH690_DATA_PARAMS_H */
