#include<stdio.h>
main()
{
	int *a, *b;
	a = (int *) malloc(sizeof(int));
   b = (int *) calloc(6, sizeof(int));

	printf("size of a = %d \n", sizeof(a));
	printf("size of b = %d \n", sizeof(b));
}

