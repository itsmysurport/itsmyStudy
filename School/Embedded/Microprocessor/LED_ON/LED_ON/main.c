
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD = 0xff;
    while (1) 
    {
		PORTD = 0xff;
    }
}

