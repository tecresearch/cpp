#include<stdio.h>
main()
{
    int x=1,y=3;
   for(int i=1;i<=4;i++)
   {
       for(int k=1;k<=y;k++)
       {
           printf("   ");
       }
       for(int j=1;j<=x;j++)
       {
           printf(" * ");
       }
       x+=2;
       y--;
       printf("\n");
   }
}



