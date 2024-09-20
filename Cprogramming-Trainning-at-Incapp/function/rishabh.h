#include<stdio.h>
void add()
{
    int num1,num2,sum;
    printf("enter two number: ");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("sum= %d",sum);
}
int sub(int num1,int num2)
{
    int s;

    s=num1-num2;
    return s;
}
