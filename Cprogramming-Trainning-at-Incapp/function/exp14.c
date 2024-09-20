#include<stdio.h>
int num=10;
void Display()
{
   // int num=20;
     printf("num in Display = %d\n", num);
     num=200;

}
main()
{
  // int num=12;
    printf("num in main = %d\n", num);
    Display();
    printf("num in main = %d\n", num);
    num=300;
    Display();
    printf("num in main = %d\n", num);
}


