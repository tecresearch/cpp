#include<stdio.h>
main()
{
   FILE *a;
   a=fopen("student.txt","a");
   int rollno,age;
   char name[20];
   printf("enter student rollno, name, age:\n");
   scanf("%d%s%d",&rollno,&name,&age);
   fprintf(a,"%d %s %d\n",rollno,name,age);
   printf("\n your data in file is updated.");
   fclose(a);
}
