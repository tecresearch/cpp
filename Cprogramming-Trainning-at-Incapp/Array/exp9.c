#include<stdio.h>
main()
{
    int array1[5],array2[5];
    int x=12,y;
    y=x;

    printf("enter five elements in First array. ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&array1[i]);
    }
     printf("First array elements are . ");
    for(int i=0;i<5;i++)
    {
        printf("array1[%d]=   %d\n",i,array1[i]);
    }
     printf("second array elements are . ");
    for(int i=0;i<5;i++)
    {
         array2[i]=array1[i];
        printf("array2[%d]=   %d\n",i,array2[i]);
    }

}

