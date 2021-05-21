#include <stdio.h>
#include <stdlib.h>
#include "string.h"




char* test()
{
	char a[5]={'h','e','l','l','o'};
	int i=0;
	char* b;
	for(i=0;i<5;i++)
	{
		b[i]=a[i];
	}
return b;
} 
 
int main(){
	char* c;
 	c=test();
	c[strlen(c)-1] = 0;
	
	//c[5] = '\0';
	
 	printf("%s",c);
	return 0;
}