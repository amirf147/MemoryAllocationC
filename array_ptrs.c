/*
 * Learning about pointers and malloc
 *
 */


#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 2
#define NUM_COLUMNS 7

int main() {

	//int *array = int( *)malloc(NUM_ROWS * NUM_COLUMNS sizeof(int));
	
	int array[NUM_ROWS][NUM_COLUMNS];

	int a = 147;
	int b = 741;
	int c = 471;
	int d = 174;
	int e = 417;
	int f = 714;
	int g = 111;

	array[0][0] = a;
	array[0][1] = b;
	array[0][2] = c;
	array[0][3] = d;
	array[0][4] = e;
	array[0][5] = f;
	array[0][6] = g;


	int *address_a2g = malloc(sizeof(int)*7); //create space for 7 int

	//*address_a2g = array[0][0]; //same as setting address_a2f[0] to value a
	//address_a2g[1] = b //next mem location
	int *add = address_a2g; //create new pointer pointing to location of b
	
	int alt_b = *add; //copying value found at *add to new location &alt_b
	
	//printf("The address %p\n contains %i\n", address_a2g, *address_a2g);
	//printf("The address %p\n contains %i\n", address_a2g + 1, address_a2g[1]);
	//printf("The address %p\n contains %i\n", add, *add);

	for (int i = 0; i < NUM_COLUMNS; i++) {

		address_a2g[i] = array[0][i];
		printf("Address of address_a2g[%d]: %p\n", i, address_a2g + i);
		printf("Address of array[0][%d]: %p\n", i, &array[0][0] + i); 

	}

	for (int i = 0; i < NUM_ROWS; i++) {
	
		for (int j = 0; j < NUM_COLUMNS; j++) {

			printf("%d ", array[i][j]);
		}
		printf("\n");
	}

	free(address_a2g);

	printf("The address %p\n contains %i\n", add, *add);
	printf("The address %p\n contains alt_b which is %i\n", &alt_b, alt_b);


	return 0;


}
