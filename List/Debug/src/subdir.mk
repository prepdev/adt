################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ArrayList.cpp \
../src/OrderedArrayList.cpp \
../src/UnOrderedArrayList.cpp \
../src/test.cpp 

OBJS += \
./src/ArrayList.o \
./src/OrderedArrayList.o \
./src/UnOrderedArrayList.o \
./src/test.o 

CPP_DEPS += \
./src/ArrayList.d \
./src/OrderedArrayList.d \
./src/UnOrderedArrayList.d \
./src/test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


