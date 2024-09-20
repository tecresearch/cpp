#include<stdio.h>
main()
{
   for(int k=1000;k<=9999;k++)
   {
                    int num,d,sum=0,org;
                 num=k;
                org=num;
                while(num!=0)
                {
                    d=num%10;
                    num=num/10;
                    sum=sum+d*d*d*d;
                }
               if(org==sum)
               {
                   printf("%d is a armstrong number, sum= %d\n",org,sum);
               }

   }
}
