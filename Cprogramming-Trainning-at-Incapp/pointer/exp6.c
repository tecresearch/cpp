#include<stdio.h>
main()
{
   int num1,num2,num3,sum,*p1,*p2,*p3,*p;
   p1=&num1;
   p2=&num2;
   p3=&num3;
   p=&sum;
   printf("enter three numbers: ");
   //scanf("%d%d%d",&num1,&num2,&num3);
   scanf("%d%d%d",p1,p2,p3);
   //sum=num1+num2+num3;
   *p=*p1+*p2+*p3;
   printf("sum of three numbers: %d\n",*p);//*(&sum)
    printf("sum of three numbers: %d\n",sum);


}

