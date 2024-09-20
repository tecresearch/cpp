#include<stdio.h>
main()
{
    char name[20];
    printf("enter name: ");
    scanf("%[^\n]s",&name);
     printf("name= %s\n",name);

      for(int i=0;name[i]!='\0';i++)
     {
             printf("%c",name[i]);
     }
}


