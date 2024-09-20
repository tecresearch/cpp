#include<stdio.h>
main()
{
    int a=10,*b;
    printf("value of a= %d\n",a);
    printf("address of a= %d\n",&a);
    printf("value of a= %d\n",*&a);
    b=&a;
      printf("value of b= %d\n",b);
       printf("address of b= %d\n",&b);
        printf("value of a= %d\n",*b);

}

