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
    else if(age >=11 && age<= 18)
    {
        printf("teenage\n");
    }
    else if(age >=19 && age<= 40)
    {
        printf("young\n");
    }
    else if(age >=41 && age<= 75)
    {
        printf("adult\n");
    }
    else if(age >=76 && age<= 100)
    {
        printf("old age\n");
    }
    else{
        printf("invalid age.");
    }

}
