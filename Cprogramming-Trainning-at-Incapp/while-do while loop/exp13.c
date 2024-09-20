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
        sum=sum*10+d;
    }
   if(org==sum)
   {
       printf("%d is a palindrom number",org);
   }
   else{
     printf("%d is not a palindrom number",org);
   }
}

