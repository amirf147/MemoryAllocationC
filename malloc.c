
#include <stdlib.h>
#include <stdio.h>

// static
int my_variable = 80;

int main() {

	//dynamic
	int *x = malloc(sizeof(int)); 	    //give me space for one int
	int *arr = malloc(sizeof(int)*100); //give me space for 100 ints

	*x = 120;

	arr[90] = 0xFEEDBEEF;
	//arr[101] = 8; //OUT OF BOUNDS. This is bad.
	
	printf("%p\n", x); 	//mem address	
	printf("%d\n", *x);	//value

	free(x);

	printf("%p\n", x);	//mem address
	printf("%d\n", *x);	//value

	return 0;
}
