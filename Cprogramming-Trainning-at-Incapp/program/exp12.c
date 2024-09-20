#include<stdio.h>
main()
{
    int a=10,b=20,c=30,d=40,e;

    e= (a++ < --b) && (--c >= ++d);
    printf("a= %d\n", a);
    printf("b= %d\n", b);
    printf("c= %d\n", c);
    printf("d= %d\n", d);
    printf("e= %d\n", e);

}

