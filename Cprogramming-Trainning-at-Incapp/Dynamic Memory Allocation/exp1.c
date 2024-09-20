#include<stdio.h>
main()
{
    int *a=(int *)malloc(sizeof(int));
    printf("Enter a Number");
    scanf("%d",a);
    printf("value at a address =  %d\n", *a);
    printf("value at a address =  %d\n", a);
    printf("value at a address =  %d\n", &a);
    printf("value at a address =  %d\n", &(*a));
}


