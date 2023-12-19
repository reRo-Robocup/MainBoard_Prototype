/*
 * stm32f446AbstractionLayer.hpp
 *
 *  Created on: Dec 7, 2023
 */

#ifndef APP_DEVICES_STM32F446ABSTRACTIONLAYER_STM32F446ABSTRACTIONLAYER_HPP_
#define APP_DEVICES_STM32F446ABSTRACTIONLAYER_STM32F446ABSTRACTIONLAYER_HPP_

#include <Devices/McuAbstractionLayer/baseMcuAbstractionLayer.hpp>

class stm32f446AbstractionLayer : public baseMcuAbstractionLayer {
   public:
    virtual void init(void);

    virtual uint16_t adcGetValue(Peripheral_ADC p);
    virtual bool isAdcConvCplt(Peripheral_ADC p);

    virtual void pwmSetDuty(Peripheral_PWM p, float duty);

    virtual void gpioSetValue(Peripheral_GPIO p, bool value);
    virtual bool gpioGetValue(Peripheral_GPIO p);

    virtual void uartPutChar(Peripheral_UART p, uint8_t data);
    virtual uint8_t uartGetChar(Peripheral_UART p);

    virtual void uartWriteViaBuffer(Peripheral_UART p, uint8_t* data, uint32_t size);
    virtual void uartReadViaBuffer(Peripheral_UART p, uint8_t* data, uint32_t size);
    virtual uint32_t uartGetRxDataSize(Peripheral_UART p);

    static bool _adcCplt[2];

   private:
    // ADC
    void _initADC();
    static uint16_t _data[2];
};

#endif /* APP_DEVICES_STM32F446ABSTRACTIONLAYER_STM32F446ABSTRACTIONLAYER_HPP_ */