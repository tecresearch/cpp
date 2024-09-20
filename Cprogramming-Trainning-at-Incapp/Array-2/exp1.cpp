#include<stdio.h>
main()
{
    int x[6]={34,6,98,12,11,3},t,i,k;
    for( k=0;k<5;k++)
    {
        for( i=0;i<5;i++)
        {
               if(x[i]<x[i+1])
               {
                   t=x[i];
                   x[i]=x[i+1];
                   x[i+1]=t;
               }
        }
    }
    for( i=0;i<6;i++)
    {
        printf("x[%d]= %d\n",i,x[i]);
    }
}
