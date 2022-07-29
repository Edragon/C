#include "stdio.h"
#include "string.h"
#include <stdlib.h> 

int main()
{


	
	int k = 0xFF;
	// 16进制
	printf("0x%x \n", k);
	printf("0x%04x \n", k);
	printf("0x%04X \n", k);
	
	int a = 49; // char = 1
	int b = 50; // char = 2
	
	printf("decimal ... \n");
	
	printf("%d-%d \n", a, b); // 有符号十进制整数
	printf("%i-%i \n", a, b); // 有符号十进制整数
	printf("%c-%c \n", a, b); // 字符
	
	//转换二进制
	printf("binary ... \n");
	char s[10];
	itoa(a, s, 2);
	printf("%s",s);
	
	while (1) 
	{
		return 0;
	}
}


