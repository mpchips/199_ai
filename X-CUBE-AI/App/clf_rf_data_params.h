/**
  ******************************************************************************
  * @file    clf_rf_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    2025-12-15T00:48:31+0800
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

#ifndef CLF_RF_DATA_PARAMS_H
#define CLF_RF_DATA_PARAMS_H

#include "ai_platform.h"

/*
#define AI_CLF_RF_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_clf_rf_data_weights_params[1]))
*/

#define AI_CLF_RF_DATA_CONFIG               (NULL)


#define AI_CLF_RF_DATA_ACTIVATIONS_SIZES \
  { 48, }
#define AI_CLF_RF_DATA_ACTIVATIONS_SIZE     (48)
#define AI_CLF_RF_DATA_ACTIVATIONS_COUNT    (1)
#define AI_CLF_RF_DATA_ACTIVATION_1_SIZE    (48)



#define AI_CLF_RF_DATA_WEIGHTS_SIZES \
  { 174812, }
#define AI_CLF_RF_DATA_WEIGHTS_SIZE         (174812)
#define AI_CLF_RF_DATA_WEIGHTS_COUNT        (1)
#define AI_CLF_RF_DATA_WEIGHT_1_SIZE        (174812)



#define AI_CLF_RF_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_clf_rf_activations_table[1])

extern ai_handle g_clf_rf_activations_table[1 + 2];



#define AI_CLF_RF_DATA_WEIGHTS_TABLE_GET() \
  (&g_clf_rf_weights_table[1])

extern ai_handle g_clf_rf_weights_table[1 + 2];


#endif    /* CLF_RF_DATA_PARAMS_H */
