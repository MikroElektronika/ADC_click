![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# ADC Click

---

- **CIC Prefix**  : ADC
- **Author**      : Jovan Stajkovic
- **Verison**     : 1.0.0
- **Date**        : Feb 2019.

---

### Software Support

We provide a library for the ADC Click on our [LibStock](https://libstock.mikroe.com/projects/view/199/adc-click-example) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library covers all the necessary functions that enables the usage of the ADC click board.
It initializes and defines the SPI driver and drivers that offer a choice for reading digital
data from all four channels seperatly or all together.

Key functions :

- ``` uint16_t adc_getAdcAllChan( uint16_t *valChan0, uint16_t *valChan1, uint16_t *valChan2, uint16_t *valChan3 ); ``` - Function reads data from all four channels.
- ``` uint16_t adc_getAdcCh0(); ``` - Function reads data from 0th channel.
- ``` uint16_t adc_getADC( uint8_t channel ); ``` - uint16_t adc_getADC( uint8_t channel );

**Examples Description**

The application is composed of three sections :

- System Initialization -   Initializes SPI module, LOG structure, sets CS pin as output.
- Application Initialization -    Initalizes SPI driver and makes an initial log.
- Application Task - (code snippet)  This is an example that shows the capabilities of the ADC click
                   by taking measurements from all four channel simultaneously.


```.c

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

```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/199/adc-click-example) page.

Other mikroE Libraries used in the example:

- SPI
- Conversions
- UART

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
