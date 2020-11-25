################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../double\ linklist.c 

OBJS += \
./double\ linklist.o 

C_DEPS += \
./double\ linklist.d 


# Each subdirectory must supply rules for building sources it contributes
double\ linklist.o: ../double\ linklist.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"double linklist.d" -MT"double\ linklist.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


