#include<stdio.h>
int main()
{
    int a=345678;
    while(a!=0)
    {
        printf("a= %d\n",a);
        a=a/10;
    }

    return 0;
}

