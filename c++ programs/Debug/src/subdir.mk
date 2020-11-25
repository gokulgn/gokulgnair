################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c++\ programs.c 

OBJS += \
./src/c++\ programs.o 

C_DEPS += \
./src/c++\ programs.d 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ programs.o: ../src/c++\ programs.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	arm-linux-gnueabihf-gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ programs.d" -MT"src/c++\ programs.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


