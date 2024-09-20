#include<stdio.h>
void display()
{
    int num=23;
    printf("num in display : %d\n",num);
    printf("address in num in display : %d\n",&num);
}

int main()
{
     int num=12;
     printf("num in main : %d\n",num);
     display();
    printf("num in main : %d\n",num);
      printf("address in num in main : %d\n",&num);
    return 0;
}

