#include<stdio.h>
#include<string.h>
main()
{
    struct Student
    {
         int rollno;
         char name[20];
         float heigth;
    };
      struct Student s1,*x;
     x=&s1;
      x->rollno=12;
      x->heigth=12.4567;
      strcpy(x->name,"brijesh");
      printf("student one rollno: %d\n",x->rollno);
       printf("student one name: %s\n",x->name);
      printf("student one heigth: %f\n",x->heigth);


}
