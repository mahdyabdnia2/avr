#include <mega16.h>
#include <io.h>
#include <delay.h>


void main(void)
{

DDRC.7=0x0;
DDRC.1=0x0;
DDRC.4 = 0x1 ;
PORTC.4 =0x1 ;
while (1)
{
// Please write your application code here

PORTC.4 = ! PORTC.4 ;

if(PINC.1==0 & PINC.7==0){

     

delay_ms(1500) ;

}


if(PINC.1==0 & PINC.7==1){

    

delay_ms(500) ;

}




}
}
