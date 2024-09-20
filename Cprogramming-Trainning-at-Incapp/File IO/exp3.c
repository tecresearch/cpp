#include<stdio.h>
main()
{
    char ch;
    printf("enter word: \n");
   ch=getchar();
   while(ch!='@')
   {
       putchar(ch);
       printf("\n");
       ch=getchar();
   }

}

