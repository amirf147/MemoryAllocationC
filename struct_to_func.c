/*
 * File:		struct.c
 * Author:		Amir Farhadi
 * Description:		Passing struct to a function
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 50

struct cancer {

                char type[MAX_LENGTH];
                int stage;
                int maxYearsLeft;

        };

void print_struct(struct cancer *cancer1);
void modif_struct(struct cancer *cancer1);
struct cancer *array_struct();

int main() {

	struct cancer cancer1;

	struct cancer *arr_struc = NULL;

	strcpy(cancer1.type, "Melanoma");
	cancer1.stage = 1;
	cancer1.maxYearsLeft = 999999;

	modif_struct(&cancer1);

	arr_struc = array_struct();
	
	printf("1st: type = %s, stage = %d, yearsLeft = %d\n", (arr_struc + 1)->type,
                        (arr_struc + 1)->stage, (arr_struc + 1)->maxYearsLeft);
	
	free(arr_struc);
	return 0;

}

void print_struct(struct cancer *cancer1) { 

	printf(" Type is: %s \n", cancer1->type);
}

void modif_struct(struct cancer *cancer1) {

	cancer1->stage = 2;
	printf("The stage is %d\n", cancer1->stage);
}

struct cancer *array_struct() { // using malloc to create array of structs

	struct cancer *ptr;
	int i, numCancers;
	printf("Enter the number of cancers: ");
	scanf("%d", &numCancers);
	
	ptr = (struct cancer *)malloc(numCancers * sizeof(struct cancer));
	
	for (i = 0; i < numCancers; i ++) {

		printf("Enter the name of the cancer, its stage");
		printf(" and number of years left to live respectively:");
		scanf("%s %d %d", (ptr + i)->type, &(ptr + i)->stage, &(ptr + i)->maxYearsLeft);


		printf("\n\nStructure %d: %p\ttype: %s\n", i, (ptr + i), (ptr + i)->type); 
	}
	
	return ptr;


}




	       	




