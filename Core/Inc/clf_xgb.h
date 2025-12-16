/*
 * clf_xgb.h
 *
 *  Created on: Dec 16, 2025
 *      Author: moreypiatos
 */

#ifndef INC_CLF_XGB_H_
#define INC_CLF_XGB_H_

#include "string.h"
#include "math.h"

/**
 * @brief Obtains the maximum value of an array. Helper function only;
 * called by score()
 * 
 * @param x (float*) - pointer to input float array
 * @param size (int) - size of the input float array
 * @param result (float*) - pointer to array where scores
 * (corresponding to the probabilty that the sample belongs
 * to each category) will be stored
 */
void softmax(float *x, int size, float *result);

/**
 * @brief Runs classification based on XGB Classifier model
 * 
 * @param input (float*) - model input, expected to be 8-long
 * @param output (float*) - model output, 3-long. Index with the
 * highest score corresponds to the predicted category of the input
 */
void ai_clf_xgb_run(float * input, float * output);

#endif /* INC_CLF_XGB_H_ */
