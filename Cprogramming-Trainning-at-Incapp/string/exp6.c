#include<stdio.h>
main()
{
    char name[20],ch;
    int status=0;
    printf("enter name: ");
    scanf("%[^\n]s",&name);
     printf("name= %s\n",name);
     printf("enter a char to search: \n");
     fflush(stdin);
     scanf("%c",&ch);
      for(int i=0;name[i]!='\0';i++)
     {
            if(ch==name[i])
            {
                status++;
            }
     }
     if(status !=0)
     {
         printf("%c is found %d times",ch,status);
     }
     else {
         printf("%c is not  found",ch);
     }
}


