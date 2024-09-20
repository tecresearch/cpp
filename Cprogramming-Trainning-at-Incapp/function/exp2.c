#include<stdio.h>

void addition()
{
     int num1,num2,num3,sum;
    printf("enter three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    printf("sum= %d\n",sum);
}
int main()
{
     addition();
    printf("\n.................................\n");
     addition();
    printf("\n.................................\n");
   addition();
    printf("\n.................................\n");

    return 0;
}

