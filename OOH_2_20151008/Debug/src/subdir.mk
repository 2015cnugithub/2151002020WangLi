################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CClothes.cpp \
../src/CFood.cpp \
../src/CGoods.cpp \
../src/MainTest.cpp 

OBJS += \
./src/CClothes.o \
./src/CFood.o \
./src/CGoods.o \
./src/MainTest.o 

CPP_DEPS += \
./src/CClothes.d \
./src/CFood.d \
./src/CGoods.d \
./src/MainTest.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


