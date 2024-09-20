#include<stdio.h>
main()
{
   for(int k=1;k<=9;k++)
   {
                    int num,d,sum=0,org;
                 num=k;
                org=num;
                while(num!=0)
                {
                    d=num%10;
                    num=num/10;
                    sum=sum+d;
                }
               if(org==sum)
               {
                   printf("%d is a armstrong number, sum= %d\n",org,sum);
               }

   }
}
