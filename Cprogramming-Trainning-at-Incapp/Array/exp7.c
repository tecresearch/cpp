#include <stdio.h>
int main()
{
     int a;
        printf("enter array size: ");
    scanf("%d",&a);
     int num[a];
   printf("enter %d number: ",a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<a;i++)
    {
       printf("num[%d]= %d\n",i,num[i]);
    }

    return 0;
}


