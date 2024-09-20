#include<stdio.h>
void print()
{
    printf("print Function.\n");
}
void show()
{
    printf("show Function.\n");
    print();
}
void Display()
{
   printf("Display Function.\n");
   show();
}
main()
{
    printf("start main.\n");
    Display();
    printf("end main .\n");

}

