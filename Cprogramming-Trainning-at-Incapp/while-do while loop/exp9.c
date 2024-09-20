#include<stdio.h>
int main()
{
    int a,org,d,sum=0;
    printf("enter a number:\n");
    scanf("%d",&a);
    org=a;
    while(a!=0)
    {
        d=a%10;
        a=a/10;
        sum=sum+d;
        printf("d= %d\n",d);
         printf("sum= %d\n",sum);

    }
   printf(" sum of digit = %d\n",sum);
    return 0;
}

