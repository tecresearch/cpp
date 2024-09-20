#include<stdio.h>
main()
{
    int num,d,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        d=num%10;
        printf("d= %d\n",d);
        num=num/10;
        printf("num= %d\n",num);
        sum=sum*10+d;
        printf("sum= %d\n",sum);
        printf("\n________________________\n");
    }
    printf("sum of digit= %d\n",sum);
}


