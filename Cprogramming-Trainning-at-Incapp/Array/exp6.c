#include <stdio.h>
int main()
{
   int num[5];
    printf("enter ten number: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<5;i++)
    {
       printf("num[%d]= %d\n",i,num[i]);
       printf("address of num[%d]= %d\n",i,&num[i]);
    }
    printf("address of num= %d\n",num);

     printf("num[%d]= %d\n",3,num[3]);
    return 0;
}


