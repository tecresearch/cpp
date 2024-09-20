#include<stdio.h>

void addition(int n1,int n2,int n3)
{
  int sum;
    sum=n1+n2+n3;
    printf("sum= %d\n",sum);
}
int main()
{
     int num1,num2,num3;
    printf("enter three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
     addition(num1,num2,num3);
    return 0;
}

