#include<stdio.h>

void show()
{
    printf("show Function.\n");
    print();
    printf("after show Function.\n");
}
void Display(){
   printf("Display Function.\n");
   show();
   printf("after Display Function.\n");
}
void print(){
    printf("print Function.\n");
}
main()
{
    printf("start main.\n");
    Display();
    printf("end main .\n");

}

