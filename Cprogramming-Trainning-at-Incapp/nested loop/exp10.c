#include<stdio.h>
main()
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
   for(int i=1;i<=num;i++)
   {
     for(int j=1;j<=num;j++)
     {
         if(i==1 || j==1 || i==num || j==num)
            printf("*\t");
         else
         printf("\t");
     }
       printf("\n");
   }
}

