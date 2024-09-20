#include<stdio.h>
main()
{
    int sum=0;

  for(int num=1;num<=10;num++)
  {
       printf("sum=  %d\t num= %d\n",sum,num);
    sum=sum+num;


  }
  printf("sum=  %d",sum);
}


