#include<stdio.h>
  struct Student
    {
         int rollno;
         char name[20];
         float heigth;
    };
struct Student display()
{
      struct Student x;
     printf("code run from display function:------ \n");
     printf(" enter first student details- rollno, name, heigth: ");
     scanf("%d%s%f",&x.rollno,&x.name,&x.heigth);
     return x;
}
main()
{
  struct Student y;
     y=display();
    printf("\n enter first student details: \n");
    printf("student one rollno: %d\n",y.rollno);
    printf("student one name: %s\n",y.name);
    printf("student one heigth: %f\n\n",y.heigth);
}


