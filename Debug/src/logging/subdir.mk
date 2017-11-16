################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/logging/MyLogger.cpp \
../src/logging/MyLogger_test.cpp 

OBJS += \
./src/logging/MyLogger.o \
./src/logging/MyLogger_test.o 

CPP_DEPS += \
./src/logging/MyLogger.d \
./src/logging/MyLogger_test.d 


# Each subdirectory must supply rules for building sources it contributes
src/logging/%.o: ../src/logging/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -D__GXX_EXPERIMENTAL_CXX0X__ -I"/home/dehnhardt/develop/Flaarlib/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


