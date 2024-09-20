#include<stdio.h>
main()
{
   FILE *a;
   char ch;
   a=fopen("hello.txt","a");
 while((ch=getchar())!='\n')
 {
      putc(ch,a);
 }

   fclose(a);
}


