#include<stdio.h>
#include<string.h>
main()
{
    struct Student
    {
         int rollno;
         char name[20];
         float heigth;
    }s2;
      struct Student s1;
     printf("\n enter first student details: \n");
     printf("enter rollno, name, heigth: ");
     scanf("%d%s%f",&s1.rollno,&s1.name,&s1.heigth);
      printf("student one rollno: %d\n",s1.rollno);
       printf("student one name: %s\n",s1.name);
      printf("student one heigth: %f\n",s1.heigth);
      printf("\n enter second student details: \n");
       printf("enter rollno, name, heigth: ");
     scanf("%d%s%f",&s2.rollno,&s2.name,&s2.heigth);
      printf("student second rollno: %d\n",s2.rollno);
       printf("student second name: %s\n",s2.name);
      printf("student second heigth: %f\n",s2.heigth);

}

