#include<stdio.h>
#define a printf
#define  b scanf
main()
{
    int n;
    a("hello");
    b("%d",&n);
    a("%d",n);
}
