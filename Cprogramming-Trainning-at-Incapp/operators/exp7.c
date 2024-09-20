#include<stdio.h>
main()
{
    int a=10,b=3,c;
    c=a>>1;
    printf(" a>>1=  %d\n ",c);
    c=a>>2;
    printf(" a>>2=  %d\n ",c);
    c=a<<1;
    printf(" a<<1=  %d\n ",c);
     c=a<<2;
    printf(" a<<2=  %d\n ",c);
    c=a<<b;
    printf(" a<<b=  %d\n ",c);
    c=a>>5;
    printf(" a>>5=  %d\n ",c);
}

