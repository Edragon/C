#include <stdio.h>
#include <stdlib.h>
#include "string.h"

#include "dat-handler.h"


int main(){
	char* k;
	k = char2str();	
 	printf("%s",k);
	return 0;
}

 
// int main(){
	// char* c;
 	// c = char2str();
	// c[strlen(c)-1] = 0;
	
	// c[5] = '\0';
	
 	// printf("%s",c);
	// return 0;
// }