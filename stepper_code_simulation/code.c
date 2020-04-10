#include<reg51.h>
#define stepper P2
sbit sw1=P3^0;
sbit sw2 = P3^1;
void delay(unsigned int);
void clockwise(unsigned int);
void anti_clockwise(unsigned int);

void main()
{
sw1=sw2=0;
while(1)
{
	while(sw1)
	{
		clockwise(500);
	 	/*stepper=0x09;
		delay(500);
		stepper=0x01;
		delay(500);
		stepper=0x03;
		delay(500);
		stepper=0x02;
		delay(500);
		stepper=0x06;
		delay(500);
		stepper=0x04;
		delay(500);
		stepper=0x0C;
		delay(500);
		stepper=0x08;
		delay(500);*/
	}
	while(sw2)
	{
	 anti_clockwise(500);
	 /*stepper=0x09;
	 delay(500);
	 stepper=0x08;
	 delay(500);
	 stepper=0x0C;
	 delay(500);
	 stepper=0x04;
	 delay(500);
	 stepper=0x06;
	 delay(500);
	 stepper=0x02;
	 delay(500);
	 stepper=0x03;
	 delay(500);
	 stepper=0x01;
	 delay(500);*/
	}
}	
}
void delay(unsigned int x)
{
 	int i;
	for(i=0;i<x;i++);

}
void clockwise(unsigned int y)
{
 		stepper=0x09;
		delay(y);
		stepper=0x01;
		delay(y);
		stepper=0x03;
		delay(y);
		stepper=0x02;
		delay(y);
		stepper=0x06;
		delay(y);
		stepper=0x04;
		delay(y);
		stepper=0x0C;
		delay(y);
		stepper=0x08;
		delay(y);
}

void anti_clockwise(unsigned int z)
{
 	 stepper=0x09;
	 delay(z);
	 stepper=0x08;
	 delay(z);
	 stepper=0x0C;
	 delay(z);
	 stepper=0x04;
	 delay(z);
	 stepper=0x06;
	 delay(z);
	 stepper=0x02;
	 delay(z);
	 stepper=0x03;
	 delay(z);
	 stepper=0x01;
	 delay(z);
}