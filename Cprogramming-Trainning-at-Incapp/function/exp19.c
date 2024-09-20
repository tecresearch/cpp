#include<stdio.h>
int x=1;
int fact(int n)
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
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    printf("fact : %d", fact(num));

}
