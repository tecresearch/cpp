#include<stdio.h>
main()
{
    int *a=(int *)malloc(sizeof(int));
    printf("Enter a Number");
    scanf("%d",a);
    printf("value at a address =  %d\n", *a);
    printf("address of value=  %d\n\n", a);
    float *a1=(float *)realloc(a, sizeof(float));
    printf("Enter a Number");
    scanf("%f",a1);
    printf("value at a address =  %f\n", *a1);
    printf("address of value=  %d\n\n", a1);
    free(a);

}

