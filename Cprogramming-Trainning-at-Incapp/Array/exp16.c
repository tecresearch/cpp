#include<stdio.h>
main()
{
    int size,temp;
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
      for(int i=0;i<size-1;i++)
      {
               for(int j=0;j<size-i;j++)
             {
                 if(array[j]>array[j+1])
                 {
                     temp= array[j];
                     array[j]=array[j+1];
                     array[j+1]=temp;
                 }

             }
      }
      printf("\n\nArray elements are after sorting: \n");
    for(int i=0;i<=size-1;i++)
    {
        printf("array[%d]=   %d\n",i,array[i]);
    }

}

