#include<stdio.h>
main()
{
    int array1[5],array2[5];
    printf("enter five elements in First array. ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&array1[i]);
         printf("array1[%d]=   %d\n",i,array1[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("array1[%d]=   %d\n",i,array1[i]);
    }

    array1[5]=12;
    printf("array[5]= %d\n",array1[5]);
}
