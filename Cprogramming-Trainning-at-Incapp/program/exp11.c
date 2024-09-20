#include<stdio.h>
main()
{
    int a=10,b=20,c=30,d=40,e;

    e= ++a + ++a + a++;
    printf("a= %d\n", a);

    printf("e= %d\n", e);

}
