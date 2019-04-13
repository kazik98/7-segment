//7s
#define F_CPU 8000000
#include <avr/io.h>
#include <util/delay.h>

int nums [10] =
{
	0x3F, //0
	0x6,  //1
	0x5B, //2
	0x4F, //3
	0x66, //4
	0x6D, //5
	0x7D, //6
	0x7,  //7
	0x7F, //8
	0x6F  //9
};

int main(void)
{
	DDRD = 0xFF;
	PORTD = 0x00;
	
	while (1)
	{
		for (int i = 9; i>= 5; i--)
		{
			PORTD = nums[i];
			_delay_ms(500);
		}
	}
}

