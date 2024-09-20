#include<stdio.h>
main()
{
   FILE *a;
   a=fopen("input.txt","a");
   int rollno,age;
   char name[20];
   printf("enter student rollno, name, age:\n");
   scanf("%d",&rollno);
    scanf("%[^\n]s",&name);
   scanf("%d",&age);
   fprintf(a,"%d %s %d\n",rollno,name,age);
   printf("\n your data in file is updated.");
   fclose(a);
}

