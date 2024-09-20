#include<stdio.h>
main()
{
   FILE *a;
   char ch;
   a=fopen("hello.txt","r");
 while((ch=getc(a))!=EOF)
 {
     putchar(ch);
 }

   fclose(a);
}



