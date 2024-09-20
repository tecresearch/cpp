#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
 void gotoxy(int x, int y)
{
            COORD c;
            c.X = x;
            c.Y = y;
            SetConsoleCursorPosition(
                GetStdHandle(STD_OUTPUT_HANDLE), c);
}
main()
{
         int a=10, b=20;
         gotoxy(20,4);
       printf("a= %d",a);
         gotoxy(10,4);
          printf("b= %d",b);
}

