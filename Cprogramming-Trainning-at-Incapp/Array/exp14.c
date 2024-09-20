#include<stdio.h>
main()
{
    int x=10,y=20;
    printf("x= %d\n",x);
     printf("y= %d\n",y);

       y=y+x;
       x=y-x;
       y=y-x;

      printf("x= %d\n",x);
     printf("y= %d\n",y);

}

