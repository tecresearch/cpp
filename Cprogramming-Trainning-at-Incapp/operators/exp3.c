#include<stdio.h>
int main()
{
    int a=10;
    int b=20,c=50,d=40,e;
    e=a>b?c:d;
    printf("e=  %d\n",e);

    e=   100 == 100 ?10:20;
    printf("e=  %d\n",e);
     e=   !(100 == 100 )?10:20;
    printf("e=  %d\n",e);
    e=   (100 <= 10 )?10+20-40:20/12+4;
    printf("e=  %d\n",e);
}
