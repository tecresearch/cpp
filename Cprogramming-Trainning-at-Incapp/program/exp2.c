#include<stdio.h>
int main()
{
   int a=15;
   printf("a=  %d\n",a);
   a=a+10;
   printf("a=  %d\n",a);
   a%=7;
   printf("a=  %d\n",a);
   a/=7;
   printf("a=  %d\n",a);
}
