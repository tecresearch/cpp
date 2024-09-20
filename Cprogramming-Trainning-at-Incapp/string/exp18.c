#include<stdio.h>
main()
{
    char name[3][20];
    printf("enter three name:");
    for(int i=0;i<3;i++)
    {
        scanf("%s",&name[i]);
    }
    printf("three name  are:");
    for(int i=0;i<3;i++)
    {
        printf("%s\n",name[i]);
    }
}

