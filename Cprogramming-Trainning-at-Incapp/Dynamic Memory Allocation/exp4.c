#include<stdio.h>
main()
{
    float *a=(float *)malloc(sizeof(float));
    if(a==NULL)
    {
        printf("Memory allocation Failed");
        exit(1);
    }
    printf("Enter a Number");
    scanf("%f",a);
    printf("value at a address: %.2f\n", *a);
    free(a);
      printf("value at a address: %.2f\n", *a);
}
