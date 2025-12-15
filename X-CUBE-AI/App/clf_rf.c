/**
  ******************************************************************************
  * @file    clf_rf.c
  * @author  AST Embedded Analytics Research Platform
  * @date    2025-12-15T00:48:31+0800
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


#include "clf_rf.h"
#include "clf_rf_data.h"

#include "ai_platform.h"
#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"



#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_clf_rf
 
#undef AI_CLF_RF_MODEL_SIGNATURE
#define AI_CLF_RF_MODEL_SIGNATURE     "0xa2382c8996faa6d9b290642ab7ad4e52"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "2025-12-15T00:48:31+0800"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_CLF_RF_N_BATCHES
#define AI_CLF_RF_N_BATCHES         (1)

static ai_ptr g_clf_rf_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_clf_rf_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  spectrum_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 8, AI_STATIC)

/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  label_output0_array, AI_ARRAY_FORMAT_S32|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 1, AI_STATIC)

/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  label_output1_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 3, AI_STATIC)

/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  label_branch_mode_array, AI_ARRAY_FORMAT_U8,
  NULL, NULL, 100, AI_STATIC)

/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  label_nodes_featureids_array, AI_ARRAY_FORMAT_U8,
  NULL, NULL, 8242, AI_STATIC)

/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  label_nodes_values_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8242, AI_STATIC)

/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  label_nodes_truenodeids_array, AI_ARRAY_FORMAT_U16,
  NULL, NULL, 8242, AI_STATIC)

/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  label_nodes_falsenodeids_array, AI_ARRAY_FORMAT_U16,
  NULL, NULL, 8242, AI_STATIC)

/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  label_class_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 12513, AI_STATIC)

/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  label_nb_node_by_estimator_array, AI_ARRAY_FORMAT_U16,
  NULL, NULL, 100, AI_STATIC)

/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  label_class_nodeids_array, AI_ARRAY_FORMAT_U16,
  NULL, NULL, 12513, AI_STATIC)

/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  label_nb_class_by_estimator_array, AI_ARRAY_FORMAT_U16,
  NULL, NULL, 100, AI_STATIC)

/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  label_classlabels_int64s_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 3, AI_STATIC)

/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  label_base_values_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 3, AI_STATIC)

/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  label_class_ids_array, AI_ARRAY_FORMAT_U16,
  NULL, NULL, 12513, AI_STATIC)

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  label_base_values, AI_STATIC,
  0, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &label_base_values_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  label_branch_mode, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 100, 1, 1), AI_STRIDE_INIT(4, 1, 1, 100, 100),
  1, &label_branch_mode_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  label_class_ids, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 12513, 1, 1), AI_STRIDE_INIT(4, 2, 2, 25026, 25026),
  1, &label_class_ids_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  label_class_nodeids, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 12513, 1, 1), AI_STRIDE_INIT(4, 2, 2, 25026, 25026),
  1, &label_class_nodeids_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  label_class_weights, AI_STATIC,
  4, 0x0,
  AI_SHAPE_INIT(4, 1, 12513, 1, 1), AI_STRIDE_INIT(4, 4, 4, 50052, 50052),
  1, &label_class_weights_array, NULL)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  label_classlabels_int64s, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &label_classlabels_int64s_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  label_nb_class_by_estimator, AI_STATIC,
  6, 0x0,
  AI_SHAPE_INIT(4, 1, 100, 1, 1), AI_STRIDE_INIT(4, 2, 2, 200, 200),
  1, &label_nb_class_by_estimator_array, NULL)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  label_nb_node_by_estimator, AI_STATIC,
  7, 0x0,
  AI_SHAPE_INIT(4, 1, 100, 1, 1), AI_STRIDE_INIT(4, 2, 2, 200, 200),
  1, &label_nb_node_by_estimator_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  label_nodes_falsenodeids, AI_STATIC,
  8, 0x0,
  AI_SHAPE_INIT(4, 1, 8242, 1, 1), AI_STRIDE_INIT(4, 2, 2, 16484, 16484),
  1, &label_nodes_falsenodeids_array, NULL)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  label_nodes_featureids, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 8242, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8242, 8242),
  1, &label_nodes_featureids_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  label_nodes_truenodeids, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 1, 8242, 1, 1), AI_STRIDE_INIT(4, 2, 2, 16484, 16484),
  1, &label_nodes_truenodeids_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  label_nodes_values, AI_STATIC,
  11, 0x0,
  AI_SHAPE_INIT(4, 1, 8242, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32968, 32968),
  1, &label_nodes_values_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  label_output0, AI_STATIC,
  12, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &label_output0_array, NULL)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  label_output1, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &label_output1_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  spectrum_output, AI_STATIC,
  14, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &spectrum_output_array, NULL)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  label_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &spectrum_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &label_output0, &label_output1),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 12, &label_branch_mode, &label_nodes_featureids, &label_nodes_values, &label_nodes_truenodeids, &label_nodes_falsenodeids, &label_class_weights, &label_nb_node_by_estimator, &label_class_nodeids, &label_nb_class_by_estimator, &label_classlabels_int64s, &label_base_values, &label_class_ids),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  label_layer, 1,
  TREE_ENSEMBLE_CLASSIFIER_TYPE, 0x0, NULL,
  tree_ensemble_classifier, forward_tree_ensemble_classifier,
  &label_chain,
  NULL, &label_layer, AI_STATIC, 
  .nl_func = NULL, 
  .all_weights_are_positive = 1, 
  .nodes_values_scale = 1.0, 
  .nodes_values_offset = 0, 
  .class_weights_scale = 1.0, 
  .class_weights_offset = 0, 
)


#if (AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 174812, 1, 1),
    174812, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 48, 1, 1),
    48, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_CLF_RF_IN_NUM, &spectrum_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_CLF_RF_OUT_NUM, &label_output0, &label_output1),
  &label_layer, 0x85e7324f, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 174812, 1, 1),
      174812, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 48, 1, 1),
      48, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_CLF_RF_IN_NUM, &spectrum_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_CLF_RF_OUT_NUM, &label_output0, &label_output1),
  &label_layer, 0x85e7324f, NULL)

#endif	/*(AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)*/



/******************************************************************************/
AI_DECLARE_STATIC
ai_bool clf_rf_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_activations_map(g_clf_rf_activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    
    spectrum_output_array.data = AI_PTR(g_clf_rf_activations_map[0] + 0);
    spectrum_output_array.data_start = AI_PTR(g_clf_rf_activations_map[0] + 0);
    label_output0_array.data = AI_PTR(g_clf_rf_activations_map[0] + 32);
    label_output0_array.data_start = AI_PTR(g_clf_rf_activations_map[0] + 32);
    label_output1_array.data = AI_PTR(g_clf_rf_activations_map[0] + 36);
    label_output1_array.data_start = AI_PTR(g_clf_rf_activations_map[0] + 36);
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_ACTIVATIONS);
  return false;
}




/******************************************************************************/
AI_DECLARE_STATIC
ai_bool clf_rf_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_weights_map(g_clf_rf_weights_map, 1, params)) {
    /* Updating weights (byte) offsets */
    
    label_branch_mode_array.format |= AI_FMT_FLAG_CONST;
    label_branch_mode_array.data = AI_PTR(g_clf_rf_weights_map[0] + 0);
    label_branch_mode_array.data_start = AI_PTR(g_clf_rf_weights_map[0] + 0);
    label_nodes_featureids_array.format |= AI_FMT_FLAG_CONST;
    label_nodes_featureids_array.data = AI_PTR(g_clf_rf_weights_map[0] + 100);
    label_nodes_featureids_array.data_start = AI_PTR(g_clf_rf_weights_map[0] + 100);
    label_nodes_values_array.format |= AI_FMT_FLAG_CONST;
    label_nodes_values_array.data = AI_PTR(g_clf_rf_weights_map[0] + 8344);
    label_nodes_values_array.data_start = AI_PTR(g_clf_rf_weights_map[0] + 8344);
    label_nodes_truenodeids_array.format |= AI_FMT_FLAG_CONST;
    label_nodes_truenodeids_array.data = AI_PTR(g_clf_rf_weights_map[0] + 41312);
    label_nodes_truenodeids_array.data_start = AI_PTR(g_clf_rf_weights_map[0] + 41312);
    label_nodes_falsenodeids_array.format |= AI_FMT_FLAG_CONST;
    label_nodes_falsenodeids_array.data = AI_PTR(g_clf_rf_weights_map[0] + 57796);
    label_nodes_falsenodeids_array.data_start = AI_PTR(g_clf_rf_weights_map[0] + 57796);
    label_class_weights_array.format |= AI_FMT_FLAG_CONST;
    label_class_weights_array.data = AI_PTR(g_clf_rf_weights_map[0] + 74280);
    label_class_weights_array.data_start = AI_PTR(g_clf_rf_weights_map[0] + 74280);
    label_nb_node_by_estimator_array.format |= AI_FMT_FLAG_CONST;
    label_nb_node_by_estimator_array.data = AI_PTR(g_clf_rf_weights_map[0] + 124332);
    label_nb_node_by_estimator_array.data_start = AI_PTR(g_clf_rf_weights_map[0] + 124332);
    label_class_nodeids_array.format |= AI_FMT_FLAG_CONST;
    label_class_nodeids_array.data = AI_PTR(g_clf_rf_weights_map[0] + 124532);
    label_class_nodeids_array.data_start = AI_PTR(g_clf_rf_weights_map[0] + 124532);
    label_nb_class_by_estimator_array.format |= AI_FMT_FLAG_CONST;
    label_nb_class_by_estimator_array.data = AI_PTR(g_clf_rf_weights_map[0] + 149560);
    label_nb_class_by_estimator_array.data_start = AI_PTR(g_clf_rf_weights_map[0] + 149560);
    label_classlabels_int64s_array.format |= AI_FMT_FLAG_CONST;
    label_classlabels_int64s_array.data = AI_PTR(g_clf_rf_weights_map[0] + 149760);
    label_classlabels_int64s_array.data_start = AI_PTR(g_clf_rf_weights_map[0] + 149760);
    label_base_values_array.format |= AI_FMT_FLAG_CONST;
    label_base_values_array.data = AI_PTR(g_clf_rf_weights_map[0] + 149772);
    label_base_values_array.data_start = AI_PTR(g_clf_rf_weights_map[0] + 149772);
    label_class_ids_array.format |= AI_FMT_FLAG_CONST;
    label_class_ids_array.data = AI_PTR(g_clf_rf_weights_map[0] + 149784);
    label_class_ids_array.data_start = AI_PTR(g_clf_rf_weights_map[0] + 149784);
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_WEIGHTS);
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/



AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_clf_rf_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_CLF_RF_MODEL_NAME,
      .model_signature   = AI_CLF_RF_MODEL_SIGNATURE,
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
      
      .n_macc            = 1099,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x85e7324f,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}



AI_API_ENTRY
ai_bool ai_clf_rf_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_CLF_RF_MODEL_NAME,
      .model_signature   = AI_CLF_RF_MODEL_SIGNATURE,
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
      
      .n_macc            = 1099,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x85e7324f,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}


AI_API_ENTRY
ai_error ai_clf_rf_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}


AI_API_ENTRY
ai_error ai_clf_rf_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    AI_CONTEXT_OBJ(&AI_NET_OBJ_INSTANCE),
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}


AI_API_ENTRY
ai_error ai_clf_rf_create_and_init(
  ai_handle* network, const ai_handle activations[], const ai_handle weights[])
{
  ai_error err;
  ai_network_params params;

  err = ai_clf_rf_create(network, AI_CLF_RF_DATA_CONFIG);
  if (err.type != AI_ERROR_NONE) {
    return err;
  }
  
  if (ai_clf_rf_data_params_get(&params) != true) {
    err = ai_clf_rf_get_error(*network);
    return err;
  }
#if defined(AI_CLF_RF_DATA_ACTIVATIONS_COUNT)
  /* set the addresses of the activations buffers */
  for (ai_u16 idx=0; activations && idx<params.map_activations.size; idx++) {
    AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_activations, idx, activations[idx]);
  }
#endif
#if defined(AI_CLF_RF_DATA_WEIGHTS_COUNT)
  /* set the addresses of the weight buffers */
  for (ai_u16 idx=0; weights && idx<params.map_weights.size; idx++) {
    AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_weights, idx, weights[idx]);
  }
#endif
  if (ai_clf_rf_init(*network, &params) != true) {
    err = ai_clf_rf_get_error(*network);
  }
  return err;
}


AI_API_ENTRY
ai_buffer* ai_clf_rf_inputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    AI_NETWORK_OBJ(network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_inputs_get(network, n_buffer);
}


AI_API_ENTRY
ai_buffer* ai_clf_rf_outputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    AI_NETWORK_OBJ(network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_outputs_get(network, n_buffer);
}


AI_API_ENTRY
ai_handle ai_clf_rf_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}


AI_API_ENTRY
ai_bool ai_clf_rf_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = AI_NETWORK_OBJ(ai_platform_network_init(network, params));
  ai_bool ok = true;

  if (!net_ctx) return false;
  ok &= clf_rf_configure_weights(net_ctx, params);
  ok &= clf_rf_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_clf_rf_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}


AI_API_ENTRY
ai_i32 ai_clf_rf_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_CLF_RF_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

