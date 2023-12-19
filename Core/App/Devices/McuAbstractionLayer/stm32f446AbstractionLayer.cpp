/*
 * stm32f446AbstractionLayer.cpp
 *
 *  Created on: Dec 7, 2023
 */

#include <Devices/McuAbstractionLayer/stm32f446AbstractionLayer.hpp>
#include "adc.h"
#include "usart.h"

struct PeripheralAllocation {
};

void stm32f446AbstractionLayer::init() {
    _initADC();
}

// ADC
uint16_t stm32f446AbstractionLayer::_data[2] = {0};
bool stm32f446AbstractionLayer::_adcCplt[2] = {0};

void stm32f446AbstractionLayer::_initADC(void) {
}

uint16_t stm32f446AbstractionLayer::adcGetValue(Peripheral_ADC p) {
}

bool stm32f446AbstractionLayer::isAdcConvCplt(Peripheral_ADC p) {
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* AdcHandle) {
}

// PWM
virtual void pwmSetDuty(Peripheral_PWM p, float duty) {
}

// GPIO

void stm32f446AbstractionLayer::gpioSetValue(Peripheral_GPIO p, bool value) {
}

bool stm32f446AbstractionLayer::gpioGetValue(Peripheral_GPIO p) {
}

// UART

void stm32f446AbstractionLayer::uartPutChar(Peripheral_UART p, uint8_t data) {
}

uint8_t stm32f446AbstractionLayer::uartGetChar(Peripheral_UART p) {
}

void stm32f446AbstractionLayer::uartWriteViaBuffer(Peripheral_UART p, uint8_t* data, uint32_t size) {
}

void stm32f446AbstractionLayer::uartReadViaBuffer(Peripheral_UART p, uint8_t* data, uint32_t size) {
}

uint32_t stm32f446AbstractionLayer::uartGetRxDataSize(Peripheral_UART p) {
}
