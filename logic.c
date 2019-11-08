#include <stdio.h>

int main() {
	int a = 10;
	int b = -5;
	int ready = 0;
	int key = 0;
	//var a = 10;
	//var b = -5;

	if (a > 0 && b > 0) {
		printf ("true\n");
	} else {
		printf ("false\n");
	};

	if (a > 0 || b > 0) {
		printf ("true\n");
	} else {
		printf ("false\n");
	};

	if (!(a > 0 || b > 0)) {
		printf ("true\n");
	} else {
		printf ("false\n");
	};

	ready =1;
	
	if ( ready  && ( key == 0) ) {
		printf ("true\n");
	} else {
		printf ("false\n");
	};
	
	
}



// // expected output: false
// printf (a > 0 || b > 0);
// // expected output: true
// printf (!(a > 0 || b > 0));
// // expected output: false


// compile
// cmd /k gcc -o "$(CURRENT_DIRECTORY)\$(NAME_PART).exe" "$(FULL_CURRENT_PATH)" & pause & exit

//gcc -o "$(CURRENT_DIRECTORY)\$(NAME_PART).exe" "$(FULL_CURRENT_PATH)" & pause & exit

// run
//cmd /k "$(CURRENT_DIRECTORY)\$(NAME_PART).exe"