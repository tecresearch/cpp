#include<stdio.h>
int Display(int num)
{
     printf("num in Display = %d\n", num);
     num=15;
      printf("num in Display = %d\n", num);
      return num;
}
main()
{
    int num=12;
    printf("num in main = %d\n", num);
    num=Display(num);
     printf("num in main = %d\n", num);
     num=Display(100);
       printf("num in main = %d\n", num);
}

