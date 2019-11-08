#include <stdio.h>

int main() {
	int i = 10;
	printf("i=%d\n", i);
	printf("Hello 111\n");
}

// compile
// cmd /k gcc -o "$(CURRENT_DIRECTORY)\$(NAME_PART).exe" "$(FULL_CURRENT_PATH)" & pause & exit

// run
//cmd /k "$(CURRENT_DIRECTORY)\$(NAME_PART).exe"