#include<stdio.h>
main()
{
    int size,num,rec,s=0;
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
      printf("enter a number to search: ");
      scanf("%d",&num);
      for(int i=0;i<=size-1;i++)
      {
          if(num==array[i])
          {
                 printf("please enter the number to replace: ");
                 scanf("%d",&rec);
                 array[i]=rec;
          }

      }
       printf("Array elements are after new value update : \n");
    for(int i=0;i<=size-1;i++)
    {
        printf("array[%d]=   %d\n",i,array[i]);
    }

}

