################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/HourlyWorker.cpp \
../src/SalariedWorker.cpp \
../src/Test.cpp \
../src/Worker.cpp 

OBJS += \
./src/HourlyWorker.o \
./src/SalariedWorker.o \
./src/Test.o \
./src/Worker.o 

CPP_DEPS += \
./src/HourlyWorker.d \
./src/SalariedWorker.d \
./src/Test.d \
./src/Worker.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


