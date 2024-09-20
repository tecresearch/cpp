#include<stdio.h>
extern int x=12;
void show()
{
   printf("x=  %d\n",x);

}
main()
{

   show();
      x=200;
   printf("x=  %d\n",x);


}


