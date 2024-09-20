#include<stdio.h>
#include<string.h>
main()
{
    union Student
    {
         int rollno;
         char name[20];
         float heigth;
    };
      union Student s1;
     printf("\n enter first student details: \n");
     printf("enter rollno: ");
     scanf("%d",&s1.rollno);
      printf("student one rollno: %d\n",s1.rollno);
        printf("student address rollno: %d\n",&s1.rollno);
      printf("enter  name: ");
     scanf("%s",&s1.name);
       printf("student one name: %s\n",s1.name);
          printf("student address name: %d\n",&s1.name);
       printf("enter heigth: ");
     scanf("%f",&s1.heigth);
      printf("student one heigth: %f\n",s1.heigth);
        printf("student address  heigth: %d\n",&s1.heigth);
}
