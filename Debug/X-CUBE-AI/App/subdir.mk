################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../X-CUBE-AI/App/ch450.c \
../X-CUBE-AI/App/ch450_data.c \
../X-CUBE-AI/App/ch450_data_params.c \
../X-CUBE-AI/App/ch475.c \
../X-CUBE-AI/App/ch475_data.c \
../X-CUBE-AI/App/ch475_data_params.c \
../X-CUBE-AI/App/ch515.c \
../X-CUBE-AI/App/ch515_data.c \
../X-CUBE-AI/App/ch515_data_params.c \
../X-CUBE-AI/App/ch550.c \
../X-CUBE-AI/App/ch550_data.c \
../X-CUBE-AI/App/ch550_data_params.c \
../X-CUBE-AI/App/ch555.c \
../X-CUBE-AI/App/ch555_data.c \
../X-CUBE-AI/App/ch555_data_params.c \
../X-CUBE-AI/App/ch600.c \
../X-CUBE-AI/App/ch600_data.c \
../X-CUBE-AI/App/ch600_data_params.c \
../X-CUBE-AI/App/ch640.c \
../X-CUBE-AI/App/ch640_data.c \
../X-CUBE-AI/App/ch640_data_params.c \
../X-CUBE-AI/App/ch690.c \
../X-CUBE-AI/App/ch690_data.c \
../X-CUBE-AI/App/ch690_data_params.c \
../X-CUBE-AI/App/clf_rf.c \
../X-CUBE-AI/App/clf_rf_data.c \
../X-CUBE-AI/App/clf_rf_data_params.c \
../X-CUBE-AI/App/clf_svc.c \
../X-CUBE-AI/App/clf_svc_data.c \
../X-CUBE-AI/App/clf_svc_data_params.c 

OBJS += \
./X-CUBE-AI/App/ch450.o \
./X-CUBE-AI/App/ch450_data.o \
./X-CUBE-AI/App/ch450_data_params.o \
./X-CUBE-AI/App/ch475.o \
./X-CUBE-AI/App/ch475_data.o \
./X-CUBE-AI/App/ch475_data_params.o \
./X-CUBE-AI/App/ch515.o \
./X-CUBE-AI/App/ch515_data.o \
./X-CUBE-AI/App/ch515_data_params.o \
./X-CUBE-AI/App/ch550.o \
./X-CUBE-AI/App/ch550_data.o \
./X-CUBE-AI/App/ch550_data_params.o \
./X-CUBE-AI/App/ch555.o \
./X-CUBE-AI/App/ch555_data.o \
./X-CUBE-AI/App/ch555_data_params.o \
./X-CUBE-AI/App/ch600.o \
./X-CUBE-AI/App/ch600_data.o \
./X-CUBE-AI/App/ch600_data_params.o \
./X-CUBE-AI/App/ch640.o \
./X-CUBE-AI/App/ch640_data.o \
./X-CUBE-AI/App/ch640_data_params.o \
./X-CUBE-AI/App/ch690.o \
./X-CUBE-AI/App/ch690_data.o \
./X-CUBE-AI/App/ch690_data_params.o \
./X-CUBE-AI/App/clf_rf.o \
./X-CUBE-AI/App/clf_rf_data.o \
./X-CUBE-AI/App/clf_rf_data_params.o \
./X-CUBE-AI/App/clf_svc.o \
./X-CUBE-AI/App/clf_svc_data.o \
./X-CUBE-AI/App/clf_svc_data_params.o 

C_DEPS += \
./X-CUBE-AI/App/ch450.d \
./X-CUBE-AI/App/ch450_data.d \
./X-CUBE-AI/App/ch450_data_params.d \
./X-CUBE-AI/App/ch475.d \
./X-CUBE-AI/App/ch475_data.d \
./X-CUBE-AI/App/ch475_data_params.d \
./X-CUBE-AI/App/ch515.d \
./X-CUBE-AI/App/ch515_data.d \
./X-CUBE-AI/App/ch515_data_params.d \
./X-CUBE-AI/App/ch550.d \
./X-CUBE-AI/App/ch550_data.d \
./X-CUBE-AI/App/ch550_data_params.d \
./X-CUBE-AI/App/ch555.d \
./X-CUBE-AI/App/ch555_data.d \
./X-CUBE-AI/App/ch555_data_params.d \
./X-CUBE-AI/App/ch600.d \
./X-CUBE-AI/App/ch600_data.d \
./X-CUBE-AI/App/ch600_data_params.d \
./X-CUBE-AI/App/ch640.d \
./X-CUBE-AI/App/ch640_data.d \
./X-CUBE-AI/App/ch640_data_params.d \
./X-CUBE-AI/App/ch690.d \
./X-CUBE-AI/App/ch690_data.d \
./X-CUBE-AI/App/ch690_data_params.d \
./X-CUBE-AI/App/clf_rf.d \
./X-CUBE-AI/App/clf_rf_data.d \
./X-CUBE-AI/App/clf_rf_data_params.d \
./X-CUBE-AI/App/clf_svc.d \
./X-CUBE-AI/App/clf_svc_data.d \
./X-CUBE-AI/App/clf_svc_data_params.d 


# Each subdirectory must supply rules for building sources it contributes
X-CUBE-AI/App/%.o X-CUBE-AI/App/%.su X-CUBE-AI/App/%.cyclo: ../X-CUBE-AI/App/%.c X-CUBE-AI/App/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI/App -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-X-2d-CUBE-2d-AI-2f-App

clean-X-2d-CUBE-2d-AI-2f-App:
	-$(RM) ./X-CUBE-AI/App/ch450.cyclo ./X-CUBE-AI/App/ch450.d ./X-CUBE-AI/App/ch450.o ./X-CUBE-AI/App/ch450.su ./X-CUBE-AI/App/ch450_data.cyclo ./X-CUBE-AI/App/ch450_data.d ./X-CUBE-AI/App/ch450_data.o ./X-CUBE-AI/App/ch450_data.su ./X-CUBE-AI/App/ch450_data_params.cyclo ./X-CUBE-AI/App/ch450_data_params.d ./X-CUBE-AI/App/ch450_data_params.o ./X-CUBE-AI/App/ch450_data_params.su ./X-CUBE-AI/App/ch475.cyclo ./X-CUBE-AI/App/ch475.d ./X-CUBE-AI/App/ch475.o ./X-CUBE-AI/App/ch475.su ./X-CUBE-AI/App/ch475_data.cyclo ./X-CUBE-AI/App/ch475_data.d ./X-CUBE-AI/App/ch475_data.o ./X-CUBE-AI/App/ch475_data.su ./X-CUBE-AI/App/ch475_data_params.cyclo ./X-CUBE-AI/App/ch475_data_params.d ./X-CUBE-AI/App/ch475_data_params.o ./X-CUBE-AI/App/ch475_data_params.su ./X-CUBE-AI/App/ch515.cyclo ./X-CUBE-AI/App/ch515.d ./X-CUBE-AI/App/ch515.o ./X-CUBE-AI/App/ch515.su ./X-CUBE-AI/App/ch515_data.cyclo ./X-CUBE-AI/App/ch515_data.d ./X-CUBE-AI/App/ch515_data.o ./X-CUBE-AI/App/ch515_data.su ./X-CUBE-AI/App/ch515_data_params.cyclo ./X-CUBE-AI/App/ch515_data_params.d ./X-CUBE-AI/App/ch515_data_params.o ./X-CUBE-AI/App/ch515_data_params.su ./X-CUBE-AI/App/ch550.cyclo ./X-CUBE-AI/App/ch550.d ./X-CUBE-AI/App/ch550.o ./X-CUBE-AI/App/ch550.su ./X-CUBE-AI/App/ch550_data.cyclo ./X-CUBE-AI/App/ch550_data.d ./X-CUBE-AI/App/ch550_data.o ./X-CUBE-AI/App/ch550_data.su ./X-CUBE-AI/App/ch550_data_params.cyclo ./X-CUBE-AI/App/ch550_data_params.d ./X-CUBE-AI/App/ch550_data_params.o ./X-CUBE-AI/App/ch550_data_params.su ./X-CUBE-AI/App/ch555.cyclo ./X-CUBE-AI/App/ch555.d ./X-CUBE-AI/App/ch555.o ./X-CUBE-AI/App/ch555.su ./X-CUBE-AI/App/ch555_data.cyclo ./X-CUBE-AI/App/ch555_data.d ./X-CUBE-AI/App/ch555_data.o ./X-CUBE-AI/App/ch555_data.su ./X-CUBE-AI/App/ch555_data_params.cyclo ./X-CUBE-AI/App/ch555_data_params.d ./X-CUBE-AI/App/ch555_data_params.o ./X-CUBE-AI/App/ch555_data_params.su ./X-CUBE-AI/App/ch600.cyclo ./X-CUBE-AI/App/ch600.d ./X-CUBE-AI/App/ch600.o ./X-CUBE-AI/App/ch600.su ./X-CUBE-AI/App/ch600_data.cyclo ./X-CUBE-AI/App/ch600_data.d ./X-CUBE-AI/App/ch600_data.o ./X-CUBE-AI/App/ch600_data.su ./X-CUBE-AI/App/ch600_data_params.cyclo ./X-CUBE-AI/App/ch600_data_params.d ./X-CUBE-AI/App/ch600_data_params.o ./X-CUBE-AI/App/ch600_data_params.su ./X-CUBE-AI/App/ch640.cyclo ./X-CUBE-AI/App/ch640.d ./X-CUBE-AI/App/ch640.o ./X-CUBE-AI/App/ch640.su ./X-CUBE-AI/App/ch640_data.cyclo ./X-CUBE-AI/App/ch640_data.d ./X-CUBE-AI/App/ch640_data.o ./X-CUBE-AI/App/ch640_data.su ./X-CUBE-AI/App/ch640_data_params.cyclo ./X-CUBE-AI/App/ch640_data_params.d ./X-CUBE-AI/App/ch640_data_params.o ./X-CUBE-AI/App/ch640_data_params.su ./X-CUBE-AI/App/ch690.cyclo ./X-CUBE-AI/App/ch690.d ./X-CUBE-AI/App/ch690.o ./X-CUBE-AI/App/ch690.su ./X-CUBE-AI/App/ch690_data.cyclo ./X-CUBE-AI/App/ch690_data.d ./X-CUBE-AI/App/ch690_data.o ./X-CUBE-AI/App/ch690_data.su ./X-CUBE-AI/App/ch690_data_params.cyclo ./X-CUBE-AI/App/ch690_data_params.d ./X-CUBE-AI/App/ch690_data_params.o ./X-CUBE-AI/App/ch690_data_params.su ./X-CUBE-AI/App/clf_rf.cyclo ./X-CUBE-AI/App/clf_rf.d ./X-CUBE-AI/App/clf_rf.o ./X-CUBE-AI/App/clf_rf.su ./X-CUBE-AI/App/clf_rf_data.cyclo ./X-CUBE-AI/App/clf_rf_data.d ./X-CUBE-AI/App/clf_rf_data.o ./X-CUBE-AI/App/clf_rf_data.su ./X-CUBE-AI/App/clf_rf_data_params.cyclo ./X-CUBE-AI/App/clf_rf_data_params.d ./X-CUBE-AI/App/clf_rf_data_params.o ./X-CUBE-AI/App/clf_rf_data_params.su ./X-CUBE-AI/App/clf_svc.cyclo ./X-CUBE-AI/App/clf_svc.d ./X-CUBE-AI/App/clf_svc.o ./X-CUBE-AI/App/clf_svc.su ./X-CUBE-AI/App/clf_svc_data.cyclo ./X-CUBE-AI/App/clf_svc_data.d ./X-CUBE-AI/App/clf_svc_data.o ./X-CUBE-AI/App/clf_svc_data.su ./X-CUBE-AI/App/clf_svc_data_params.cyclo ./X-CUBE-AI/App/clf_svc_data_params.d ./X-CUBE-AI/App/clf_svc_data_params.o ./X-CUBE-AI/App/clf_svc_data_params.su

.PHONY: clean-X-2d-CUBE-2d-AI-2f-App

