#include<stdio.h>
int main()
{
	int n;
	printf("Enter how many numbers you want to store.\n");
    scanf("%d", &n);
	int *a = (int *)calloc(n, sizeof(int));
	printf("Enter %d numbers\n", n);
    for(int i = 0; i < n ; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Entered Numbers are: \n");
    for(int i = 0; i < n; i++)
    {
        printf("a[%d]= %d\n",i, a[i]);
    }
    free(a);
}

