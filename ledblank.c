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

if(PINC.1==0 & PINC.7==0){

     
PORTC.4 = ! PORTC.4 ;

delay_ms(500) ;

}


if(PINC.1==0 & PINC.7==1){

     
PORTC.4 = ! PORTC.4 ;

delay_ms(500) ;

}




}
}
