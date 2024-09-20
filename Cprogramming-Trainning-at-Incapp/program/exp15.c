#include<stdio.h>
main()
{
    char a='g',b='G',e;

    e= a<b;
    printf("a= %d\n", a);
    printf("b= %d\n", b);
     printf("a= %d\n", &a);
    printf("b= %d\n", &b);
     printf("a= %c\n", a);
    printf("b= %c\n", b);
    printf("e= %d\n", e);

}
