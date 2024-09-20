#include<stdio.h>
main()
{
    int size,num,s=0;
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
                s++;
          }

      }
       if(s!=0)
          {
              printf("%d is found \t %d times .\n",num,s);
          }
          else{
             printf("%d is not  found .\n",num);
          }

}

