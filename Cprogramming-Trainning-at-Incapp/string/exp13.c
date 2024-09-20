#include<stdio.h>
main()
{
    char name[20],ch,ch1;
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
                printf("enter a char to replace: \n");
                scanf(" %c",&ch1);
                name[i]=ch1;
            }
     }
      printf("after replace name= %s\n",name);

}
