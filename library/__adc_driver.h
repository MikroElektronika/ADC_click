/*
    __adc_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __adc_driver.h
@brief    ADC Driver
@mainpage ADC Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   ADC
@brief      ADC Click Driver
@{

| Global Library Prefix | **ADC** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Feb 2019.**      |
| Developer             | **Jovan Stajkovic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _ADC_H_
#define _ADC_H_

/** 
 * @macro T_ADC_P
 * @brief Driver Abstract type 
 */
#define T_ADC_P    const uint8_t*

/** @defgroup ADC_COMPILE Compilation Config */              /** @{ */

   #define   __ADC_DRV_SPI__                            /**<     @macro __ADC_DRV_SPI__  @brief SPI driver selector */
//  #define   __ADC_DRV_I2C__                            /**<     @macro __ADC_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __ADC_DRV_UART__                           /**<     @macro __ADC_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup ADC_VAR Variables */                           /** @{ */

extern const uint8_t ADC_CH0;
extern const uint8_t ADC_CH1;
extern const uint8_t ADC_CH2;
extern const uint8_t ADC_CH3;


                                                                       /** @} */
/** @defgroup ADC_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup ADC_INIT Driver Initialization */              /** @{ */

#ifdef   __ADC_DRV_SPI__
void adc_spiDriverInit(T_ADC_P gpioObj, T_ADC_P spiObj);
#endif
#ifdef   __ADC_DRV_I2C__
void adc_i2cDriverInit(T_ADC_P gpioObj, T_ADC_P i2cObj, uint8_t slave);
#endif
#ifdef   __ADC_DRV_UART__
void adc_uartDriverInit(T_ADC_P gpioObj, T_ADC_P uartObj);
#endif

/** @defgroup ADC_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Get ADC function
 *
 * @param[in] channel  4-bit value that defines channel
 *
 * @returns result 12-bit data reading from designated channel
 *
 * Function reads data from designated channel.
 * @note Use predefined values, or consult datasheet.
**/
uint16_t adc_getADC( uint8_t channel );

/**
 * @brief Get ADC from CH0 function
 *
 * @returns result 12-bit data reading from channel 0th channel
 *
 * Function reads data from 0th channel.
**/
uint16_t adc_getAdcCh0();

/**
 * @brief Get ADC from CH1 function
 *
 * @returns result 12-bit data reading from channel 1st channel
 *
 * Function reads data from 1th channel.
**/
uint16_t adc_getAdcCh1();

/**
 * @brief Get ADC from CH2 function
 *
 * @returns result 12-bit data reading from channel 2nd channel
 *
 * Function reads data from 2nd channel.
**/
uint16_t adc_getAdcCh2();

/**
 * @brief Get ADC from CH3 function
*
 * @returns result 12-bit data reading from channel 3rd channel
 *
 * Function reads data from 3rd channel.
**/
uint16_t adc_getAdcCh3();

/**
 * @brief Get ADC from all channels function
 *
 * @param[out] valChan0  12-bit data reading from channel 0th channel
 * @param[out] valChan1  12-bit data reading from channel 1st channel
 * @param[out] valChan2  12-bit data reading from channel 2nd channel
 * @param[out] valChan3  12-bit data reading from channel 3rd channel
 *
 * Function reads data from all four channels.
**/
uint16_t adc_getAdcAllChan( uint16_t *valChan0, uint16_t *valChan1, uint16_t *valChan2, uint16_t *valChan3 );



                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_ADC_STM.c
    @example Click_ADC_TIVA.c
    @example Click_ADC_CEC.c
    @example Click_ADC_KINETIS.c
    @example Click_ADC_MSP.c
    @example Click_ADC_PIC.c
    @example Click_ADC_PIC32.c
    @example Click_ADC_DSPIC.c
    @example Click_ADC_AVR.c
    @example Click_ADC_FT90x.c
    @example Click_ADC_STM.mbas
    @example Click_ADC_TIVA.mbas
    @example Click_ADC_CEC.mbas
    @example Click_ADC_KINETIS.mbas
    @example Click_ADC_MSP.mbas
    @example Click_ADC_PIC.mbas
    @example Click_ADC_PIC32.mbas
    @example Click_ADC_DSPIC.mbas
    @example Click_ADC_AVR.mbas
    @example Click_ADC_FT90x.mbas
    @example Click_ADC_STM.mpas
    @example Click_ADC_TIVA.mpas
    @example Click_ADC_CEC.mpas
    @example Click_ADC_KINETIS.mpas
    @example Click_ADC_MSP.mpas
    @example Click_ADC_PIC.mpas
    @example Click_ADC_PIC32.mpas
    @example Click_ADC_DSPIC.mpas
    @example Click_ADC_AVR.mpas
    @example Click_ADC_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __adc_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */