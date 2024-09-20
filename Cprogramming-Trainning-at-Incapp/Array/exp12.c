#include<stdio.h>
main()
{
    int size,num,s=0,max;
    printf("enter size of array: ");
    scanf("%d",&size);
    int array[size];
    printf("enter %d elements in First array. \n",size);
    for(int i=0;i<=size-1;i++)
    {
        scanf("%d",&array[i]);
    }
     printf("Array elements are : \n");
    for(int i=0;i<=size-1;i++)
    {
        printf("array[%d]=   %d\n",i,array[i]);
    }
     max=array[0];
      for(int i=1;i<=size-1;i++)
      {
         if(max<array[i])
         {
             max=array[i];
         }
      }
      printf("max= %d\n",max);


}

