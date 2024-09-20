#include<stdio.h>
main()
{
   FILE *a;
   char ch;
   a=fopen("hello.txt","r");
   ch=getc(a);
   putchar(ch);

   fclose(a);
}


