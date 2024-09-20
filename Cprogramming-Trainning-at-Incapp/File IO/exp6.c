#include<stdio.h>
main()
{
   FILE *a;
   char ch;
   a=fopen("hello.txt","a");
  ch=getchar();
  //putchar(ch);
  putc(ch,a);
   fclose(a);
}

