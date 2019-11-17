#include <stdio.h>
#include <string.h>

float a = 3.8766;

char aa[6];

char b = 'A';

//memcpy(aa, a, 5);
//printf(aa);

//char aa[6] = a.ToString();

void method1() {
	sprintf(aa, "%f", a);
	int dian1 = aa[2];
	int dian2 = aa[3];
	
	//printf("%d\n", aa[0]);
	//printf("%d\n", aa[1]);
	putchar(dian1);
	putchar(dian2);
	
}



//sprintf( "1 - %d \n ", aa[0]);
//sprintf( "2 - %d \n ", aa[1]);


int method2(int num){
    num = num-(int)num;

	
    for(int i=0;i<10;i++){
        num *=10;
        if(num-(int)num==0){
            return i+1;
        }
    }
}

//int result;

void main() {
	method1();
	
}
