#include<stdio.h>

void Display(int n)
{
   printf("Display before calling . n= %d address of n= %d \n  ",n,&n);
   n++;
   if(n!=5)
   {
       Display(n);
   }
   printf("after calling Display. n= %d address of n= %d \n  ",n,&n);
}
main()
{
    printf("start main.\n");
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    Display(num);
    printf("end main .\n");

}

