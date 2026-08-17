################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../my_modules/src/error_handler_task.c 

OBJS += \
./my_modules/src/error_handler_task.o 

C_DEPS += \
./my_modules/src/error_handler_task.d 


# Each subdirectory must supply rules for building sources it contributes
my_modules/src/%.o my_modules/src/%.su my_modules/src/%.cyclo: ../my_modules/src/%.c my_modules/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I"C:/My Data/technical_courses/hands_on_stm32_freeRTOS/test_freeRTOS_f411re/my_modules/inc" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-my_modules-2f-src

clean-my_modules-2f-src:
	-$(RM) ./my_modules/src/error_handler_task.cyclo ./my_modules/src/error_handler_task.d ./my_modules/src/error_handler_task.o ./my_modules/src/error_handler_task.su

.PHONY: clean-my_modules-2f-src

