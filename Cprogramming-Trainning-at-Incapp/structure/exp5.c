#include<stdio.h>
#include<string.h>
  struct Student
    {
         int rollno;
         char name[20];
         float heigth;
    }s1,s2;
void display()
{
    printf("\n enter first student details: \n");
      printf("student one rollno: %d\n",s1.rollno);
       printf("student one name: %s\n",s1.name);
      printf("student one heigth: %f\n\n",s1.heigth);

      printf("\n enter second student details: \n");
      printf("student second rollno: %d\n",s2.rollno);
       printf("student second name: %s\n",s2.name);
      printf("student second heigth: %f\n",s2.heigth);
}
main()
{

   printf("code run from main:------ \n");
     printf(" enter first student details- rollno, name, heigth: ");
     scanf("%d%s%f",&s1.rollno,&s1.name,&s1.heigth);
       printf("enter second student details rollno, name, heigth: ");
     scanf("%d%s%f",&s2.rollno,&s2.name,&s2.heigth);
     display();
}


