#include<stdio.h>
int main()
{
    int a=10;
    int b=20,c=50,d=40,e;
  /*  e=a++ > --b?++c:d--;
    printf("a=  %d\n",a);//11
    printf("b=  %d\n",b);//19
    printf("c=  %d\n",c);//50
    printf("d=  %d\n",d);//39
    printf("e=  %d\n",e);//40
   */

      e=a++ > --b?a++ - b--:d-- - c++;
    printf("a=  %d\n",a);
    printf("b=  %d\n",b);
    printf("c=  %d\n",c);
    printf("d=  %d\n",d);
    printf("e=  %d\n",e);
}

