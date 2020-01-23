#include <Arduino.h>
#include <Wire.h>
#include <EEPROM.h>
#include <rom/rtc.h>
#include "hal.hpp"
#include "MPU9250.hpp"
#include "wristband-tft.hpp"

#define GYRO_CALIBRATION_BASE_ADDRESS 0x10
#define MAG_CALIBRATION_BASE_ADDRESS 0x20
#define ACCEL_CALIBRATION_BASE_ADDRESS 0x30

void initMPU();
int16_t getBearing();
int calibrateBearing();
void calibrateGyro();
void mpuSleep();
float getTemperature();