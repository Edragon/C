#include <stdio.h>

int main() {

	for (int i = 0; i < 255; i++) {
		
		char a = (char)i;
		printf(" %i Char:   %c   \n", i, a);
	}
}