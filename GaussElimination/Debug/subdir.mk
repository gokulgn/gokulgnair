################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Gauss\ Elimination.cpp \
../GaussElimination001.cpp 

OBJS += \
./Gauss\ Elimination.o \
./GaussElimination001.o 

CPP_DEPS += \
./Gauss\ Elimination.d \
./GaussElimination001.d 


# Each subdirectory must supply rules for building sources it contributes
Gauss\ Elimination.o: ../Gauss\ Elimination.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Gauss Elimination.d" -MT"Gauss\ Elimination.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


