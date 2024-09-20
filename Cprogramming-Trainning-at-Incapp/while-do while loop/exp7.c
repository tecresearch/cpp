#include<stdio.h>
int main()
{
    int a,l=0,org;
    printf("enter a number:\n");
    scanf("%d",&a);
    org=a;
    while(a!=0)
    {
        a=a/10;
       l++;
    }
   printf("%d length is %d\n",org,l);
    return 0;
}


