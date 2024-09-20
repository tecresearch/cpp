#include<stdio.h>
main()
{
    int x=6,y=1;
   for(int i=1;i<=7;i++)
   {
       for(int j=1;j<=x;j++)
       {
           printf(" -");
       }
       printf(" *");
       if(i!=1 )
       {

           for(int k=1;k<=y;k++)
           {
               if(i==4)
               {
                   printf(" *");
               }
               else
                 printf(" -");
           }
           y+=2;
           printf(" *");
       }
       printf("\n");
       x--;
   }
}


