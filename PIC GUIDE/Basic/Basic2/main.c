/* 
 * File:   main.c
 * Author: Muhammad Aiman Rafiqi
 * 
 * so yea we already learn how to register OUTPUT and INPUT, Also how to control the OUTPUT pins
 * before we going to more complicated section you need to know how to control INPUT pins...
 *
 * 
 * TASK
 * jika PB di tekan LED1 akan menyala, jika ia dilepaskan PB LED2 akan menyala
 * 
 * CONNECTION
 * RB0 = PUSHBUTTON
 * RB2 = LED1
 * 
 * Created on January 25, 2025, 6:23 PM
 */

// CONFIG1
#pragma config FOSC = EXTRC_CLKOUT// Oscillator Selection bits (RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, RC on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = OFF      // Brown Out Reset Selection bits (BOR disabled)
#pragma config IESO = ON        // Internal External Switchover bit (Internal/External Switchover mode is enabled)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is disabled)
#pragma config LVP = OFF        // Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)

// CONFIG2
#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.
// mcm mne nak dapat code config? Production > Set Configuration Bits
#include <xc.h>



#define _XTAL_FREQ 20000000

#define PUSHBUTTON PORTBbits.RB0
#define LED1 PORTBbits.RB2
//we can give name to our pins

void main(void) //Setup section
{
    TRISB0 = 1;
    TRISB2 = 0;

    LED1 = 0;
    while(1) //looping section
    {
        if (PUSHBUTTON == 1)
        {
            LED1 = 1;
        }
        
        else
        {
            LED1 = 0;
            
        }

        
    }
    return;
}

