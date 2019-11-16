#include<stdio.h>
#include<string.h>

int main() {
	//unit16_t k;
	int k;
	k = 156;
	//k = 006;
	printf("%d\n",k);
	
	int bai = k / 100 % 10;
	int shi = k / 10 % 10;
	int ge = k / 1 % 10;
	printf("bai = %d\n", bai);
	printf("shi = %d\n", shi);
	printf("ge = %d\n", ge);
}