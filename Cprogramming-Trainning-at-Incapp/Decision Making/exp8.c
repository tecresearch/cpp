#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("enter two number: ");
    scanf("%d%d",&num1,&num2);
    result=num1+num2;
    printf("addition of two numbers= %d\n",result);
     result=num1-num2;
    printf("sub of two numbers= %d\n",result);
     result=num1*num2;
    printf("multi of two numbers= %d\n",result);
     result=num1/num2;
    printf("Div of two numbers= %d\n",result);
     result=num1%num2;
    printf("mod of two numbers= %d\n",result);
    return 0;
}
