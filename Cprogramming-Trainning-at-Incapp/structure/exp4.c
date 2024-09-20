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
      struct Student s[3];
      for(int i=0;i<3;i++)
      {
            printf("enter %d student rollno, name, heigth details: ",i+1);
            scanf("%d%s%f",&s[i].rollno,&s[i].name,&s[i].heigth);
      }

      for(int i=0;i<3;i++)
      {
            printf("%d student rollno, name, heigth details: \n",i+1);
            printf("%d\n%s\n%f\n",s[i].rollno,s[i].name,s[i].heigth);
      }

}

