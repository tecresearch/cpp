#include<stdio.h>
main()
{
   int a[3][2][4];
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<2;j++)
       {
           for(int k=0;k<4;k++)
           {
               scanf("%d",&a[i][j][k]);
           }
       }
   }
   printf("\n..............................................................\n");
    for(int i=0;i<3;i++)
   {
       for(int j=0;j<2;j++)
       {
           for(int k=0;k<4;k++)
           {
               printf("a[%d][%d][%d]= %d\n",i,j,k,a[i][j][k]);
           }
       }
   }
}

