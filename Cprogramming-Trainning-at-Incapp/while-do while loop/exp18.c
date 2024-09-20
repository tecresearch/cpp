#include<stdio.h>
main()
{
    int l=0;
   for(int i=1;i<=1000;i++)
           {
                int num,d,sum=0,org;
                num=i;
            org=num;
            while(num!=0)
            {
                d=num%10;
                num=num/10;
                sum=sum*10+d;
            }
           if(org==sum)
           {
               printf("%d is a palindrom number\n",org);
               l++;
           }

   }
   printf("total number: %d",l);
}

