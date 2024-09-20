#include<stdio.h>
  struct Student
    {
         int rollno;
         char name[20];
         float heigth;
    };
void display(struct Student y)
{
    struct Student a;
    printf("\n enter first student details: \n");
      printf("student one rollno: %d\n",y.rollno);
      a.rollno=y.rollno;
        printf("a rollno : %d\n",a.rollno);
       printf("student one name: %s\n",y.name);
      printf("student one heigth: %f\n\n",y.heigth);
}
main()
{
  struct Student x;
   printf("code run from main:------ \n");
     printf(" enter first student details- rollno, name, heigth: ");
     scanf("%d%s%f",&x.rollno,&x.name,&x.heigth);

     display(x);
     printf("address of x= %d\n",x);
      printf("address of x.rollno= %d\n",&x.rollno);
}



