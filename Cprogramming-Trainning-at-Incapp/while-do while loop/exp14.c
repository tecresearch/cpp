#include<stdio.h>
main()
{
    int num,d,sum=0,org;
    printf("enter a number:");
    scanf("%d",&num);
    org=num;
    while(num!=0)
    {
        d=num%10;
        num=num/10;
        sum=sum+d*d*d;
    }
   if(org==sum)
   {
       printf("%d is a armstrong number, sum= %d",org,sum);
   }
   else{
     printf("%d is not a armstrong number, sum = %d",org,sum);
   }
}

