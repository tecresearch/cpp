#include<stdio.h>
main()
{
    int a[4],*b[4];
    printf("enter four numbers : ");

    for(int i=0;i<4;i++)
    {
        b[i]=&a[i];
        scanf("%d",b[i]);
    }
   printf(" four numbers are:\n ");
    for(int i=0;i<4;i++)
    {

        printf("a[%d]= %d\n",i,*b[i]);
    }

}


