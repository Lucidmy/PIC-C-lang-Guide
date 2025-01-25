/* 
 * File:   main.c
 * Author: Muhammad Aiman Rafiqi
 * 
 * hello there! having hard time to study programming? let me show you how to learn this language!
 * ahh malas ah speaking....
 * so aku akan explain benda paling basic untuk PIC/ C language
 * jadi... benda paling asas iaitu TRISx dan PORTx...
 * 
 * TRISx biasa di gunakan untuk register pins (I/O) 1 = INPUT, 0 = OUTPUT
 * manakala PORTx digunakan untuk control output 1 = HIGH, 0 = LOW
 * 
 *
 * Created on January 24, 2025, 6:24 PM
 */

#include <xc.h> //this one adalah file header compiler... jgn tinggal nnti code error
#define _XTAL_FREQ 20000000 //external freq disetkan kepada 20MHz

void main(void) //benda ni wajib untuk membina satu structure coding (please jgn tinggal... error nnti)
{
    TRISA0 = 1; //pin A0 adalah input. declare dalam bentuk decimal
    TRISA1 = 0; //pin A1 adalah output
    TRISB = 0b00000000; //pin B adalah output. declare dalam bentuk binary
    TRISC = 0xff; //pin C adalah input. declare dalam bentuk Hexcimal
    
    //please jgn lupa system nombor tu penat ii Pn. Ida ajar :laugh:
    
    while(1) //looping section
    {
        PORTAbits.RA1 = 1;//pin A1 dalam keadaan HIGH/ ON
        __delay_ms(1000); //make sure setup external freq. tanpa benda tu delay xjadi
        PORTAbits.RA1 = 0;//pin A1 dalam keadaan LOW/ OFF
        __delay_ms(1000);
        
        /*
         * ahh yes korang juga boleh setkan HIGH or LOW satu line PORT
         * cara dia mcm ni
         */
        PORTB = 0xff; //pin PORTB dalam keadaan HIGH/ OFF
        __delay_ms(1000);
        PORTB = 0x00; //pin PORTB dalam keadaan LOW/ OFF
        __delay_ms(1000);
         
    }
    return;
}

// aku rasa tu je kot hopefully korang paham cara aku ajar... :thumbup:
