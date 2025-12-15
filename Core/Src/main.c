/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "tim.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "usart.h"
#include "stdio.h"
#include "stdarg.h"
#include "stdint.h"
#include "string.h"

#include "ai_platform.h"
#include "ai_datatypes_defines.h"

#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"

#include "ch450.h"
#include "ch450_data.h"
#include "ch475.h"
#include "ch475_data.h"
#include "ch515.h"
#include "ch515_data.h"
#include "ch550.h"
#include "ch550_data.h"
#include "ch555.h"
#include "ch555_data.h"
#include "ch600.h"
#include "ch600_data.h"
#include "ch640.h"
#include "ch640_data.h"
#include "ch690.h"
#include "ch690_data.h"
#include "clf_rf.h"
#include "clf_rf_data.h"
#include "clf_svc.h"
#include "clf_svc_data.h"

#include "test_data.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
#define N_SAMPLES 315
#define N_CHANNELS 8
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
/* IO buffers ----------------------------------------------------------------*/
ai_float* data_ins[8] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
ai_float* data_ins_clf[8] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
ai_float* data_outs[8] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
ai_float* data_outs_clf[2] = {NULL, NULL};

/* Activations buffers -------------------------------------------------------*/
AI_ALIGNED(32) uint8_t pool0[AI_CH450_DATA_ACTIVATION_1_SIZE];
AI_ALIGNED(32) static uint8_t pool1[AI_CH475_DATA_ACTIVATION_1_SIZE];
AI_ALIGNED(32) static uint8_t pool2[AI_CH515_DATA_ACTIVATION_1_SIZE];
AI_ALIGNED(32) static uint8_t pool3[AI_CH550_DATA_ACTIVATION_1_SIZE];
AI_ALIGNED(32) static uint8_t pool4[AI_CH555_DATA_ACTIVATION_1_SIZE];
AI_ALIGNED(32) static uint8_t pool5[AI_CH600_DATA_ACTIVATION_1_SIZE];
AI_ALIGNED(32) static uint8_t pool6[AI_CH640_DATA_ACTIVATION_1_SIZE];
AI_ALIGNED(32) static uint8_t pool7[AI_CH690_DATA_ACTIVATION_1_SIZE];
AI_ALIGNED(32) static uint8_t pool8[AI_CLF_RF_DATA_ACTIVATION_1_SIZE];
AI_ALIGNED(32) static uint8_t pool9[AI_CLF_SVC_DATA_ACTIVATION_1_SIZE];

ai_handle ch450_act_addr[] = {pool0};
ai_handle ch475_act_addr[] = {pool1};
ai_handle ch515_act_addr[] = {pool2};
ai_handle ch550_act_addr[] = {pool3};
ai_handle ch555_act_addr[] = {pool4};
ai_handle ch600_act_addr[] = {pool5};
ai_handle ch640_act_addr[] = {pool6};
ai_handle ch690_act_addr[] = {pool7};
ai_handle clf_rf_act_addr[] = {pool8};
ai_handle clf_svc_act_addr[] = {pool9};

/* AI objects ----------------------------------------------------------------*/

ai_handle ch450 = AI_HANDLE_NULL;
ai_handle ch475 = AI_HANDLE_NULL;
ai_handle ch515 = AI_HANDLE_NULL;
ai_handle ch550 = AI_HANDLE_NULL;
ai_handle ch555 = AI_HANDLE_NULL;
ai_handle ch600 = AI_HANDLE_NULL;
ai_handle ch640 = AI_HANDLE_NULL;
ai_handle ch690 = AI_HANDLE_NULL;
ai_handle clf_rf = AI_HANDLE_NULL;
ai_handle clf_svc = AI_HANDLE_NULL;

ai_buffer* ai_input_ch450;
ai_buffer* ai_output_ch450;

/* Program variables ---------------------------------------------------------*/

char buf[50]; // all-purpose buffer
ai_i32 batch;
ai_error ai_err;
uint32_t timestamp;
uint32_t elapsed;
float uncalib_spectrum[8];
float calib_spectrum[8];
int func_group;
// float concentration;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM11_Init();
  /* USER CODE BEGIN 2 */
  MX_USART2_UART_Init();
  UART_printf("\r\nValidation --  Calibration and Classifier Models\r\n\n");

  UART_printf("Executing ai_ch450_create_and_init()\r\n");

  ai_err = ai_ch450_create(&ch450, AI_CH450_DATA_CONFIG);
  if (ai_err.type != AI_ERROR_NONE) {
    UART_printf("1. (FAIL) Creation of ch450 instance\r\n");
    ai_log_err(ai_err, "ai_ch450_create");
  } else {
	  UART_printf("1. (SUMAKSES) Creation of ch450 instance\r\n");
  }

  ai_network_params ch450_params;
  if (ai_ch450_data_params_get(&ch450_params) != true) {
    ai_err = ai_ch450_get_error(ch450);
    UART_printf("2. (FAIL) Creation of ch450 params\r\n");
    ai_log_err(ai_err, "ai_ch450_data_params_get");
  } else {
    UART_printf("2. (SUMAKSES) Creation of ch450 params\r\n");
  }
  
#if defined(AI_CH450_DATA_ACTIVATIONS_COUNT)
  /* set the addresses of the activations buffers */
  for (ai_u16 idx=0; ch450_act_addr && idx<ch450_params.map_activations.size; idx++) {
    AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&ch450_params.map_activations, idx, ch450_act_addr[idx]);
  }
#endif
#if defined(AI_CH450_DATA_WEIGHTS_COUNT)
  /* set the addresses of the weight buffers */
  for (ai_u16 idx=0; NULL && idx<ch450_params.map_weights.size; idx++) {
    AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&ch450_params.map_weights, idx, NULL);
  }
#endif

  UART_printf("3. (SUMAKSES) Obtaining activations and weight addresses\r\n");

  if (ai_ch450_init(ch450, &ch450_params) != true) {
    ai_err = ai_ch450_get_error(ch450);
    UART_printf("4. (FAIL) Initialization of ch450 network\r\n");
    ai_log_err(ai_err, "ai_ch450_init");
  } else {
    UART_printf("4. (SUMAKSES) Initialization of ch450 network\r\n");
  }

  ai_input_ch450 = ai_ch450_inputs_get(ch450, NULL);
  ai_output_ch450 = ai_ch450_outputs_get(ch450, NULL);

  UART_printf("5. (SUMAKSES) Assignment of ch450 input & output data addresses\r\n");
  UART_printf("\tInput ADDR: %x\r\n", (*ai_input_ch450).data);
  UART_printf("\tOutput ADDR: %x\r\n", (*ai_output_ch450).data);

  data_ins[0] = (*ai_input_ch450).data;
  data_outs[0] = (*ai_output_ch450).data;
  UART_printf("6. (SUMAKSES) Assignment of per-model data to global data variable\r\n");
  UART_printf("\tInput ADDR: %x\r\n", data_ins[0]);
  UART_printf("\tOutput ADDR: %x\r\n", data_outs[0]);

  UART_printf("End of ai_ch450_create_and_init()\r\n\n");

  UART_printf("Proceeding to data acquisition\r\n");
  for (int i=0; i < 1; i++) {
    // obtain the data
	  // UART_printf("Sample %i: ", i);
    UART_printf("Data read: %f\r\n", input_data_f[i*8]);
    *data_ins[0] = (ai_float) input_data_f[(i*8) + 0];
    UART_printf("data_ins[0]: %f\r\n", *data_ins[0]);
    // ai_input_ch450->data = (ai_handle*)data_ins[0];
    // UART_printf("ch450_in:    %f\r\n", &ai_input_ch450->data);
    // UART_printf("ch450_in:    %f\r\n", ai_input_ch450->data);
    // UART_printf("ch450_in@:   %x %x\r\n", &(*ai_input_ch450).data, (*ai_input_ch450).data);
    // UART_printf("\r\n\nDone reading samples.\r\n");
  }

  UART_printf("\r\nExecuting ai_run()\r\n");

  HAL_TIM_Base_Start(&htim11);
  timestamp = htim11.Instance->CNT;

  batch = ai_ch450_run(ch450, ai_input_ch450, ai_output_ch450);

  elapsed = htim11.Instance->CNT - timestamp;

  UART_printf("Finished in %u microseconds\r\n", elapsed);
  if (batch != 1) {
    UART_printf("1. (FAIL) Inference failed :((\r\n");
    ai_log_err(ai_ch450_get_error(ch450), "ai_ch450_run");
  } else {
    UART_printf("1. (SUMAKSES) Inference successful\r\n");
  }

  calib_spectrum[0] = ((float*) data_outs)[0];
  UART_printf("Result: %f\r\n", (float) *data_outs[0]);



  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 100;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_3) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */
void UART_printf(char *format, ...) {
	char buffer[256];
	va_list args;
	va_start(args, format);
	vsnprintf(buffer, sizeof(buffer), format, args);
	va_end(args);
	HAL_UART_Transmit(&huart2, (uint8_t *)buffer, strlen(buffer), 1000);
}

void ai_log_err(ai_error err, char *fct)
{
  if (fct)
    UART_printf("AI Error (%s) - type=0x%02x code=0x%02x\r\n", fct,
        err.type, err.code);
  else
    UART_printf("AI Error - type=0x%02x code=0x%02x\r\n", err.type, err.code);

  do {} while (1);
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}
#ifdef USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
