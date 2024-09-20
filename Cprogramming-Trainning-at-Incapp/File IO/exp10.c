#include<stdio.h>
main()
{
   FILE *a;
   char ch;
   a=fopen("exp10.c","r");
   if(a==NULL)
   {
       printf("file not found");
   }
   else{
                while((ch=getc(a))!=EOF)
             {
                 putchar(ch);
             }
   }

   fclose(a);
}



