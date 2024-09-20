#include<stdio.h>
main()
{
    int a[4],*b;
    b=&a[0];
    printf("enter four numbers : ");
    for(int i=0;i<4;i++)
    {
        scanf("%d",b);
        b++;
    }
   printf(" four numbers are:\n ");
    for(int i=0;i<4;i++)
    {
        b=&a[i];
        printf("a[%d]= %d\n",i,*b);
    }

}

