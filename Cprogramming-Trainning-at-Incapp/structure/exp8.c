#include<stdio.h>
#include<string.h>
main()
{
    struct Student
    {
         int rollno;
         char name[20];
         int marks[4];
         int total;
         float per;
    };
    int topper,p;
      struct Student s[3];
      for(int i=0;i<3;i++)
      {
            printf("enter %d student rollno, name details: ",i+1);
            scanf("%d%s",&s[i].rollno,&s[i].name);
            printf("enter %d student marks: \n",i+1);
            for(int j=0;j<4;j++)
            {
                printf("enter %d subject marks: ",j+1);
                scanf("%d",&s[i].marks[j]);
            }
      }
      printf("\n-----------details are: --------------------\n");
       for(int i=0;i<3;i++)
      {
            s[i].total=0;
            printf("%d. student rollno, name details are :\n ",i+1);
            printf("%d\n%s\n",s[i].rollno,s[i].name);
            for(int j=0;j<4;j++)
            {
                printf("%d. Course: ",j+1);
                printf("%d\n",s[i].marks[j]);
                s[i].total=s[i].total+s[i].marks[j];
            }
            printf("Total Marks : %d \n",s[i].total);
            s[i].per=s[i].total/4.0;
             printf("Per : %f \n",s[i].per);
            printf("\n________________________\n");
      }
      topper=s[0].total;
      p=0;
      for(int k=1;k<3;k++)
      {
          if(topper<s[k].total)
          {
              topper=s[k].total;
              p=k;
          }
      }
      printf("\n\n.......................................................\n");
      printf("Topper of the class : \n Name: %s \n rollno: %d\n Total: %d\n Per:= %f\n",
             s[p].name,s[p].rollno,topper,s[p].per);
}

