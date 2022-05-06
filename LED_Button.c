/*
 * File:   LED_Button.c
 * Author: OnlyCircuits
 */
#define _XTAL_FREQ 8000000                 //Frecuencia del cristal

#include <xc.h>                            //Librería estándar
#include "pic16f877a_configuration.h"      //Define los fusibles

void main(void) {
    
    TRISD = 0x04;                           //RD2 como entrada
    PORTB = 0x00;                           //Puerto D en bajo
    
    while(1)
    {
        if(PORTDbits.RD2)
        {
          PORTD = 0x02;                     //RD1 en alto
        }
        else
        {
           PORTD = 0x00;                    //RD1 en bajo
        }
    }
    return;
}
