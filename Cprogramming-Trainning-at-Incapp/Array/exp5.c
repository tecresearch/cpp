#include <stdio.h>
int main()
{
   int num[10];
    printf("enter ten number: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<10;i++)
    {
       printf("num[%d]= %d\n",i,num[i]);
    }

    return 0;
}


