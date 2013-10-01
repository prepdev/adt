################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Adt_client.cpp \
../src/ArrayList.cpp \
../src/BinarySearch.cpp 

OBJS += \
./src/Adt_client.o \
./src/ArrayList.o \
./src/BinarySearch.o 

CPP_DEPS += \
./src/Adt_client.d \
./src/ArrayList.d \
./src/BinarySearch.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


