#include<stdio.h>
main()
{
    int x[3][2],i,j;
    printf("enter six number:");
      for(i=0;i<3;i++)
      {
          for(j=0;j<2;j++)
          {
              scanf("%d",&x[i][j]);
          }
      }
      printf("six number are :\n");
      for(i=0;i<3;i++)
      {
          for(j=0;j<2;j++)
          {
              printf("x[%d][%d]= %d\n",i,j,x[i][j]);
              printf("address of x[%d][%d]= %d\n",i,j,&x[i][j]);
          }
      }
      printf("x= %d\n",x);

}
