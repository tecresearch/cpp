#include<stdio.h>
main()
{
    int x=4,y=0;
   for(int i=1;i<=4;i++)
   {
       for(int k=1;k<=y;k++)
       {
           printf("\t");
       }
       for(int j=1;j<=x;j++)
       {
           printf("*\t");
       }
       x--;
       y++;
       printf("\n");
   }
}



