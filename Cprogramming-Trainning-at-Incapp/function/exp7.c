#include<stdio.h>

int addition(int n1,int n2,int n3)
{
  int sum;
    sum=n1+n2+n3;
   return sum;
}

int main()
{
     int num1,num2,num3;
    printf("enter three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    int x= addition(num1,num2,num3);
   printf("sum of three numbers are : %d",x);

    return 0;
}


