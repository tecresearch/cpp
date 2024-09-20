#include<stdio.h>
int display(int num)
{
    printf("num in display : %d\n",num);
    printf("address in num in display : %d\n",&num);
    num=100;
    return num;
}

int main()
{
     int num=12;
     printf("num in main : %d\n",num);
     num=display(num);
    printf("num in main : %d\n",num);
      printf("address in num in main : %d\n",&num);
    return 0;
}

