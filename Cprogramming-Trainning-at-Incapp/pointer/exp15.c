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
      struct Student s[3],*y;
      for(int i=0;i<3;i++)
      {
          y=&s[i];
            printf("enter %d student rollno, name, heigth details: ",i+1);
            scanf("%d",&y->rollno);
            scanf("%s",&y->name);
              scanf("%f",&y->heigth);
      }

      for(int i=0;i<3;i++)
      {
            y=&s[i];
            printf("%d student rollno, name, heigth details: \n",i+1);
            printf("%d\n%s\n%f\n",y->rollno,y->name,y->heigth);
      }

}

