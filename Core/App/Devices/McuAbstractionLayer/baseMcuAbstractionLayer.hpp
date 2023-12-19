/*
 * baseMcuAbstractionLayer.hpp
 *
 *  Created on: Dec 7, 2023
 */

#ifndef APP_DEVICES_BASEMCUABSTRACTIONLAYER_MCUABSTRACTIONLAYER_HPP_
#define APP_DEVICES_BASEMCUABSTRACTIONLAYER_MCUABSTRACTIONLAYER_HPP_

#include <stdint.h>

class baseMcuAbstractionLayer {
   public:
    enum Peripheral_ADC {
        MuxA,
        MuxB,
        BatteryVoltage,
        BallCatchA,
        BallCatchB,

    };

    enum Peripheral_PWM {
        M1,
        M2,
        M3,
        M4,
    };

    enum Peripheral_GPIO {
        MuxA_Sig0,
        MuxA_Sig1,
        MuxA_Sig2,
        MuxA_Sig3,
        MuxB_Sig0,
        MuxB_Sig1,
        MuxB_Sig2,
        MuxB_Sig3,
    };

    enum Peripheral_UART {
        Cam,
        Debug,
    };

    virtual void init(void) = 0;

    virtual uint16_t adcGetValue(Peripheral_ADC p) = 0;
    virtual bool isAdcConvCplt(Peripheral_ADC p) = 0;

    virtual void pwmSetDuty(Peripheral_PWM p, float duty) = 0;

    virtual void gpioSetValue(Peripheral_GPIO p, bool value) = 0;
    virtual bool gpioGetValue(Peripheral_GPIO p) = 0;

    virtual void uartPutChar(Peripheral_UART p, uint8_t data) = 0;
    virtual uint8_t uartGetChar(Peripheral_UART p) = 0;

    virtual void uartWriteViaBuffer(Peripheral_UART p, uint8_t* data, uint32_t size) = 0;
    virtual void uartReadViaBuffer(Peripheral_UART p, uint8_t* data, uint32_t size) = 0;
    virtual uint32_t uartGetRxDataSize(Peripheral_UART p) = 0;
};

typedef baseMcuAbstractionLayer MAL;

#endif /* APP_DEVICES_BASEMCUABSTRACTIONLAYER_MCUABSTRACTIONLAYER_HPP_ */