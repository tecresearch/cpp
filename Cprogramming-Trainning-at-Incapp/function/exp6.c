#include<stdio.h>

void addition(int n1,int n2,int n3)
{
  int sum;
    sum=n1+n2+n3;
    printf("sum= %d\n",sum);
}
void sub(int n1,int n2)
{
  int s;
    s=n1-n2;
    printf("sub= %d\n",s);
}
int main()
{
     int num1,num2,num3;
    printf("enter three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
  sub(num1,num3);

    return 0;
}


