################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ButtonRequest.cpp \
../src/Cell.cpp \
../src/Main.cpp \
../src/Minesweeper.cpp \
../src/MinesweeperDisplay.cpp \
../src/MouseRequest.cpp \
../src/NoRequest.cpp \
../src/QuitRequest.cpp \
../src/Request.cpp 

OBJS += \
./src/ButtonRequest.o \
./src/Cell.o \
./src/Main.o \
./src/Minesweeper.o \
./src/MinesweeperDisplay.o \
./src/MouseRequest.o \
./src/NoRequest.o \
./src/QuitRequest.o \
./src/Request.o 

CPP_DEPS += \
./src/ButtonRequest.d \
./src/Cell.d \
./src/Main.d \
./src/Minesweeper.d \
./src/MinesweeperDisplay.d \
./src/MouseRequest.d \
./src/NoRequest.d \
./src/QuitRequest.d \
./src/Request.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


