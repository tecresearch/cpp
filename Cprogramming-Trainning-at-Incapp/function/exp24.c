#include<stdio.h>
void show()
{
   register int x=12;
   printf("x=  %d\n",x);
   x++;
}
main()
{
   show();
   show();
   show();
}

