#include<stdio.h>
long long x=1;
long long fact(int n)
{
    if(n>0)
    {
        x=n*fact(n-1);
    }
    else
    {
        return x;
    }
}
main()
{
    for(int num=1;num<=20;num++)
    {
        printf("%d : %lld\n", num,fact(num));
        x=1;
    }


}

