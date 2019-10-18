#include <mega16.h>
#include <io.h>
#include <delay.h>


void main(void)
{
DDRC.4 = 0x1 ;
PORTC.4 =0x1 ;
while (1)
{
// Please write your application code here
PORTC.4 = ! PORTC.4 ;

delay_ms(100) ;


}
}
