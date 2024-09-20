#include<stdio.h>
main()
{
    float a=10.89,*b;

    printf("value of a= %f\n",a);
    printf("address of a= %d\n",&a);
    printf("value of a= %f\n",*&a);
    b=&a;
      printf("value of b= %d\n",b);
       printf("address of b= %d\n",&b);
        printf("value of a= %f\n",*b);

}

