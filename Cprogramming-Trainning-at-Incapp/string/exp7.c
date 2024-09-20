#include<stdio.h>
main()
{
    char name[20];
    int length=0;

    printf("enter name: ");
    scanf("%s",&name);
     printf("name= %s\n",name);

      for(int i=0;name[i]!='\0';i++)
     {
          length++;
     }
   printf("length of your name is:  %d",length);
}



