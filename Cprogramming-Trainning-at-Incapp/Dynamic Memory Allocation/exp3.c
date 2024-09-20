#include<stdio.h>
#include<stdlib.h>
main()
{
    int *a=malloc(sizeof(10));
    if(a==NULL)
    {
        printf("Memory allocation Failed");
        exit(1);
    }
    printf("Enter a Number");
    scanf("%d",a);
    printf("value at a address =  %d\n", *a);

    free(a);
    printf("\n value at a address after free =  %d\n", *a);

}

