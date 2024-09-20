#include<stdio.h>
main()
{
   FILE *a;
   a=fopen("hello.txt","a");
   fclose(a);
}

