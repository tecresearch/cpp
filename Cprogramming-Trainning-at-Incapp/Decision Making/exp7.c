#include<stdio.h>
main()
{
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    if(age >=1 && age<= 10)
    {
        printf("kid\n");
    }
     if(age >=11 && age<= 18)
    {
        printf("teenage\n");
    }
    if(age >=19 && age<= 40)
    {
        printf("young\n");
    }
     if(age >=41 && age<= 75)
    {
        printf("adult\n");
    }
     if(age >=76 && age<= 100)
    {
        printf("old age\n");
    }


}

