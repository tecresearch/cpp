#include<stdio.h>
main()
{
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    if(age>= 18)
        printf("%d is greater than or equal to 18.\n",age);

    else
        printf("age is not greater than 18.\n");
    printf("end of program.");
}

