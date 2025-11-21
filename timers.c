#include <xc.h>

void init_timer2(void)
{
    //timer2 control register
    
    //selecting post scalar as 1:1
    
    T2CKPS0 = 1;
    T2CKPS1 = 1;
    
    PR2 = 250;
    TMR2IE = 1;
    TMR2IF = 0;    // Clear interrupt flag

    TMR2ON = 1;
    
    
}
