#include<stdio.h>
main()
{
   FILE *a;
   a=fopen("student.txt","r");
   int rollno,age;
   char name[20];
   if(a==NULL)
   {
       printf("file not found");
   }
   else{
        printf("\nrollno    name       age\n");
        while((fscanf(a,"%d%s%d",&rollno,&name,&age))!=EOF)
        {

            printf("%-10d%-10s%-10d\n",rollno,name,age);
        }
   }
   fclose(a);
}

