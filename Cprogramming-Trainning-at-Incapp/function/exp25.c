#include<stdio.h>
void show()
{
   static int x;
   printf("x=  %d\n",x);
   x+=3;
}
main()
{
   show();
   show();
   show();
}
