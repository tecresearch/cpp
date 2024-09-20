#include<stdio.h>
main()
{
    int x=4,y=0;
   for(int i=1;i<=4;i++)
   {
     for(int j=1;j<=4;j++)
     {
         if(i==1 || j==1 || i==4 || j==4)
            printf("*\t");
         else
         printf("\t");
     }
       printf("\n");
   }
}




