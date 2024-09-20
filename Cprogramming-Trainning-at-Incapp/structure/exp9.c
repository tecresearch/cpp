#include<stdio.h>
main()
{
    struct person
        {
            int age;
            char name[20];
        };
    struct employee
    {
          struct person p1;
        int salary;

    }e1;
    struct student{
        int marks;
        struct person p2;
}s1;
    printf("enter employee name:");
    scanf("%s",&e1.p1.name);
    printf("enter employee age:");
    scanf("%d",&e1.p1.age);
    printf("enter employee salary:");
    scanf("%d",&e1.salary);
    printf("Employee name: %s\n",e1.p1.name);
     printf("Employee age: %d\n",e1.p1.age);
      printf("Employee salary: %d\n",e1.salary);
    printf("\n\nenter student name:");
    scanf("%s",&s1.p2.name);
    printf("enter student age:");
    scanf("%d",&s1.p2.age);
    printf("enter student marks:");
    scanf("%d",&s1.marks);
      printf("student name: %s\n",s1.p2.name);
     printf("student age: %d\n",s1.p2.age);
      printf("student marks: %d\n",s1.marks);
}
