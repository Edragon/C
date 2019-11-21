#include "stdio.h"
#include "string.h"
#include <stdlib.h> 

int main()
{
	int a = 60; /* 60 = 0011 1100 */ 
	int b = 13;
	int e = 0;
	//d = 00111100;
	
	int c = 0;
	//c = c << 1;     // 向右移位
	
	c |=1;  // & = and,  | = or
	c = c <<1; // left shift
	c |=1;  // or
	c = (c <<1) |1; 
	c = (c <<1) |1;
	char s[10];
	itoa(c, s, 2);
	
	printf("bin: %s \n", s);
	
	printf("hex: 0x%02x \n", c);
	while (1) 
	{

	}
}


