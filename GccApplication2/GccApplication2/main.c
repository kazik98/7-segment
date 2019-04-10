//7s
#define F_CPU 8000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = 0xFF;
	PORTD = 0x00;
	
	while (1)
	{
		PORTD = 0b01101111;
		_delay_ms(500);
		
		PORTD = 0b01111111;
		_delay_ms(500);
		
		PORTD = 0b00000111;
		_delay_ms(500);
		
		PORTD = 0b01111101;
		_delay_ms(500);
		
		PORTD = 0b01101101;
		_delay_ms(500);
	}
}

