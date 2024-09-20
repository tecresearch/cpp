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
        while((fscanf(a,"%d%s%d",&rollno,&name,&age))!=EOF)
        {

            printf("rollno: %d\nname: %s\nage: %d\n\n",rollno,name,age);
        }
   }

   fclose(a);
}

