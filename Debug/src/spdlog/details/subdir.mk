################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../src/spdlog/details/format.cc 

CC_DEPS += \
./src/spdlog/details/format.d 

OBJS += \
./src/spdlog/details/format.o 


# Each subdirectory must supply rules for building sources it contributes
src/spdlog/details/%.o: ../src/spdlog/details/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -D__GXX_EXPERIMENTAL_CXX0X__ -I"/home/dehnhardt/develop/Flaarlib/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


