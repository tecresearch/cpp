#include<stdio.h>
int main()
{
   int num;
   float num2;
   char ch;
   printf("enter a number\n");
   scanf("%d",&num);
   printf("num= %d\n",num);
    printf("enter char\n");
   fflush(stdin);
   scanf("%c",&ch);
   printf("ch= %c\n",ch);
    printf("ascii ch= %d\n",ch);
   printf("enter float number\n");
   scanf("%f",&num2);
   printf("num2= %f\n",num2);


    return 0;
}


