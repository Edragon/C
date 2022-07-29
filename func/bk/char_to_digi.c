#include <stdio.h>
#include <string.h>

char c = '5';

int main() {
	//int a=(int) c;//将得到字符'1'的ASCII码；

	int a = c - 48;//将得到数字1；字符0的ascii值是48
	
	//putchar(a);
	printf("%i", a);
}


//或者int a=c-'0';