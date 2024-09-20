#include<stdio.h>
main()
{
    int a=10,c=20,d=30,*b;

    printf("value of a= %d\n",a);
    printf("address of a= %d\n",&a);
    printf("value of a= %d\n",*&a);
    b=&a;
      printf("value of b= %d\n",b);
       printf("address of b= %d\n",&b);
        printf("value of a= %d\n",*b);
        b=&c;
      printf("value of c= %d\n",c);
    printf("address of c= %d\n",&c);
    printf("value of c= %d\n",*&c);
    printf("value of b= %d\n",b);
       printf("address of b= %d\n",&b);
        printf("value of c= %d\n",*b);
         b=&d;
      printf("value of d= %d\n",d);
    printf("address of d= %d\n",&d);
    printf("value of d= %d\n",*&d);
    printf("value of b= %d\n",b);
       printf("address of b= %d\n",&b);
        printf("value of d= %d\n",*b);

}

