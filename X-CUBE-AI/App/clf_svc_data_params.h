/**
  ******************************************************************************
  * @file    clf_svc_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    2025-12-17T00:11:08+0800
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

#ifndef CLF_SVC_DATA_PARAMS_H
#define CLF_SVC_DATA_PARAMS_H

#include "ai_platform.h"

/*
#define AI_CLF_SVC_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_clf_svc_data_weights_params[1]))
*/

#define AI_CLF_SVC_DATA_CONFIG               (NULL)


#define AI_CLF_SVC_DATA_ACTIVATIONS_SIZES \
  { 2344, }
#define AI_CLF_SVC_DATA_ACTIVATIONS_SIZE     (2344)
#define AI_CLF_SVC_DATA_ACTIVATIONS_COUNT    (1)
#define AI_CLF_SVC_DATA_ACTIVATION_1_SIZE    (2344)



#define AI_CLF_SVC_DATA_WEIGHTS_SIZES \
  { 22072, }
#define AI_CLF_SVC_DATA_WEIGHTS_SIZE         (22072)
#define AI_CLF_SVC_DATA_WEIGHTS_COUNT        (1)
#define AI_CLF_SVC_DATA_WEIGHT_1_SIZE        (22072)



#define AI_CLF_SVC_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_clf_svc_activations_table[1])

extern ai_handle g_clf_svc_activations_table[1 + 2];



#define AI_CLF_SVC_DATA_WEIGHTS_TABLE_GET() \
  (&g_clf_svc_weights_table[1])

extern ai_handle g_clf_svc_weights_table[1 + 2];


#endif    /* CLF_SVC_DATA_PARAMS_H */
