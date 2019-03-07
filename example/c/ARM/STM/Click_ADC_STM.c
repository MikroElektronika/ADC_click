/*
Example for ADC Click

    Date          : Feb 2019.
    Author        : Jovan Stajkovic

Test configuration STM32 :
    
    MCU              : STM32F107VCT6
    Dev. Board       : EasyMx PRO v7 for STM32
    ARM Compiler ver : v6.1.0.0

---

Description :

The application is composed of three sections :

- System Initialization -   Initializes SPI module, LOG structure, sets CS pin as output.
- Application Initialization -    Initalizes SPI driver and makes an initial log.
- Application Task - (code snippet)  This is an example that shows the capabilities of the ADC click
                   by taking measurements from all four channel simultaneously.

*/

#include "Click_ADC_types.h"
#include "Click_ADC_config.h"

char txt[ 50 ];
uint16_t valChan0;
uint16_t valChan1;
uint16_t valChan2;
uint16_t valChan3;

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );

    mikrobus_spiInit( _MIKROBUS1, &_ADC_SPI_CFG[0] );

    mikrobus_logInit( _LOG_USBUART_A, 9600 );

    Delay_ms( 100 );
}

void applicationInit()
{
    adc_spiDriverInit( (T_ADC_P)&_MIKROBUS1_GPIO, (T_ADC_P)&_MIKROBUS1_SPI );
    Delay_ms( 100 );

    mikrobus_logWrite( "------------------", _LOG_LINE );
    mikrobus_logWrite( "    ADC Click    ", _LOG_LINE );
    mikrobus_logWrite( "------------------", _LOG_LINE );
}

void applicationTask()
{
    adc_getAdcAllChan( &valChan0, &valChan1, &valChan2, &valChan3 );
    Delay_ms( 100 );

    IntToStr( valChan0, txt );
    Ltrim( txt );
    mikrobus_logWrite( " Channel 0 : ", _LOG_TEXT );
    mikrobus_logWrite( txt, _LOG_LINE );

    IntToStr( valChan1, txt );
    Ltrim( txt );
    mikrobus_logWrite( " Channel 1 : ", _LOG_TEXT );
    mikrobus_logWrite( txt, _LOG_LINE );

    IntToStr( valChan2, txt );
    Ltrim( txt );
    mikrobus_logWrite( " Channel 2 : ", _LOG_TEXT );
    mikrobus_logWrite( txt, _LOG_LINE );

    IntToStr( valChan3, txt );
    Ltrim( txt );
    mikrobus_logWrite( " Channel 3 : ", _LOG_TEXT );
    mikrobus_logWrite( txt, _LOG_LINE );

    mikrobus_logWrite( "------------------", _LOG_LINE );
    Delay_ms( 1000 );

}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}