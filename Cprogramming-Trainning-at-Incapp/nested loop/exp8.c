#include<stdio.h>
main()
{
    int x=4,y=0;
   for(int i=1;i<=4;i++)
   {
     for(int j=1;j<=4;j++)
     {
         if((i==2 && j==2) ||(i==2 && j==3) || (i==3 && j==2) || (i== 3 &&j==3))
            printf("\t");
         else
         printf("*\t");
     }
       printf("\n");
   }
}



