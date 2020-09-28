/*
 * Learning about pointers and malloc
 *
 */


#include <stdio.h>
#include <stdlib.h>

#define size1 2
#define size2 7
int main() {

	//int array[size1][size2];

	int a = 147;
	int b = 741;
	//int c = 471;
	//int d = 174;
	//int e = 417;
	//int f = 714;
	//int g = 111;

	int *address_a2f = malloc(sizeof(int)*7); //create space for 7 int

	*address_a2f = a; //same as setting address_a2f[0] to value a
	address_a2f[1] = b; //next mem location
	int *add = address_a2f + 1; //create new pointer pointing to location of b
	
	int alt_b = *add; //copying value found at *add to new location &alt_b
	
	printf("The address %p\n contains %i\n", address_a2f, *address_a2f);
	printf("The address %p\n contains %i\n", address_a2f + 1, address_a2f[1]);
	printf("The address %p\n contains %i\n", add, *add);




	/*for (int i = 0; i < size1; i++) {

		for (int j = 0; j < size2; j++) {

			array[i][j] = j;

			printf("%d ", array[i][j]);
		}
		printf("\n");
	}*/

	free(address_a2f);

	printf("The address %p\n contains %i\n", add, *add);
	printf("The address %p\n contains alt_b which is %i\n", &alt_b, alt_b);


	return 0;


}
