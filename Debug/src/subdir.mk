################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/FlaarlibSimpleRun.cpp \
../src/FlaarlibSimpleRun_test.cpp 

OBJS += \
./src/FlaarlibSimpleRun.o \
./src/FlaarlibSimpleRun_test.o 

CPP_DEPS += \
./src/FlaarlibSimpleRun.d \
./src/FlaarlibSimpleRun_test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -D__GXX_EXPERIMENTAL_CXX0X__ -I"/home/dehnhardt/develop/Flaarlib/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


