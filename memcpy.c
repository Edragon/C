//memcpy.c
#include<stdio.h>
#include<string.h>

int main() {
	char* s = "Golden Global View";
	char d[20];
	//clrscr();
	memcpy(d,s,strlen(s));
	d[strlen(s)]='\0';//因为从d[0]开始复制，总长度为strlen(s)，d[strlen(s)]置为结束符
	printf("%s",d);
	//getchar();
	
	//return;
	
}