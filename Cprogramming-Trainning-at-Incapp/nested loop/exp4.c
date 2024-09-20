#include<stdio.h>
main()
{
    int n1,n2;
    printf("enter first loop size: \n");
    scanf("%d",&n1);
     printf("enter second loop size: \n");
    scanf("%d",&n2);


   for(int i=1;i<=n1;i++)
   {
       for(int j=1;j<=n2;j++)
       {
           printf(" * ");
       }
       printf("\n");
   }
}


