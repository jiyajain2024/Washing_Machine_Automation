/*
 * File:   main.c
 * Author: hp
 *
 * Created on 2 June, 2025, 4:15 PM
 */


#include <xc.h>
#include"main.h"
#pragma config WDTE = OFF

static void init_config(void)
{
    LED_ARRAY_DDR = 0X00;
   LED_ARRAY = 0X00;
}
void main(void) {
    init_config();
    while(1){
        LED_ARRAY = ~LED_ARRAY;
        
        for(unsigned long int i=5000;i--;);
    }
    return;
}
