#include<stdio.h>
main()
{
    int a=10;
    printf("value of a= %d\n",a);
    printf("address of a= %d\n",&a);
    printf("value of a= %d\n",*&a);
}
