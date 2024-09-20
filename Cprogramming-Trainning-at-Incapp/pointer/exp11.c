#include<stdio.h>
main()
{
    char name[20],*q;
    q=&name;
    printf("enter name: ");
    scanf("%s",q);
    printf("name= %s",q);


}



