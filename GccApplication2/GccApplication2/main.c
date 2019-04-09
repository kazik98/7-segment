//7s
#define F_CPU 8000000
#include <avr/io.h>
#include <util/delay.h>

void preset(){
	DDRD = 0b11111111;
	PORTD = 0b00000000;
}

int main(void)
{
	preset();
	while (1)
	{
		for(int i=0;i<=4;i++)
		{
			PORTD = 0b11101111;
			_delay_ms(500);
			PORTD = 0x00;
			
			PORTD = 0b11111111;
			_delay_ms(500);
			PORTD = 0x00;
			
			PORTD = 0b00000111;
			_delay_ms(500);
			PORTD = 0x00;
			
			PORTD = 0b11111101;
			_delay_ms(500);
			PORTD = 0x00;
			
			PORTD = 0b11101101;
			_delay_ms(500);
			PORTD = 0x00;
			
		}
	}
}

