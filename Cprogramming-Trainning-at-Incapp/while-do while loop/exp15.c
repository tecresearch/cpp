#include<stdio.h>
main()
{
   for(int k=100;k<=999;k++)
   {
                    int num,d,sum=0,org;
                 num=k;
                org=num;
                while(num!=0)
                {
                    d=num%10;
                    num=num/10;
                    sum=sum+d*d*d;
                }
               if(org==sum)
               {
                   printf("%d is a armstrong number, sum= %d\n",org,sum);
               }

   }
}


