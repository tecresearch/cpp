#include<stdio.h>
int main()
{
   int a=15,c;


         printf("a=  %d\n",a--);
       printf("a=  %d\n",a);
       c=a--;
       printf("a=  %d\n",a);
       printf("c=  %d\n",c);
        c=--a  +10;
       printf("a=  %d\n",a);
       printf("c=  %d\n",c);
}

