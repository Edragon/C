#include <stdio.h>
#include <stdlib.h>
#include "string.h"


#include "dat-handler.h"

char* char2str()
{
	char a[5]={'h','e','l','l','o'};
	int i=0;
	char* b;
	for(i=0;i<5;i++)
	{
		b[i]=a[i];
	}
	b[strlen(b)-1] = 0;
	
	return b;
	
	
} 


 