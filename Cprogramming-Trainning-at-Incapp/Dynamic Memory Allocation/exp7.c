#include<stdio.h>
#include<stdlib.h>
int main()
{

	int *a = (int *)calloc(3, sizeof(4));
	printf("Enter Three numbers\n");
    for(int i = 0; i < 3 ; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Entered numbers are\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
    free(a);
     printf("after free Entered numbers are\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
}
