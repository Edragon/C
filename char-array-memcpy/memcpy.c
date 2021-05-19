//memcpy.c
#include<stdio.h>
#include<string.h>

int main() {
	char* s = "Golden Global View";
	char d[20];
	
	//clrscr();
	
	memcpy(d,s,strlen(s));
	
	d[strlen(s)]='\0';//因为从d[0]开始复制，总长度为strlen(s)，d[strlen(s)]置为结束符
	
	printf("%s\n",d);
	
	
	printf("%c\n",d[0]);
	
	printf("%c\n",d[1]);
	printf("%c\n",d[2]);
	printf("%c\n",d[3]);
	printf("%c\n",d[4]);
	printf("%c\n",d[5]);
	printf("%c\n",d[6]);
	printf("%c\n",d[7]);
	printf("%c\n",d[8]);
	
	printf("%d\n",d[0]);
	printf("%d\n",d[1]);
	printf("%d\n",d[2]);
	
	
	//getchar();
	
	//return;
	
}