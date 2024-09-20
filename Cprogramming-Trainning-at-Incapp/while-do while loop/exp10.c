#include<stdio.h>
main()
{
    int num,l=0,temp;

    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        num=num/10;
        l++;   //l=l+1;
    }
    printf("l= %d\n",l);
    printf("%d number length is %d\n",temp,l);
}
