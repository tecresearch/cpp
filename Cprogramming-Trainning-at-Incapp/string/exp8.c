#include<stdio.h>
#include<string.h>
main()
{
    char name[20];
    int length;

    printf("enter name: ");
    scanf("%s",&name);
     printf("name= %s\n",name);

    length=strlen(name);
   printf("length of your name is:  %d",length);

}


