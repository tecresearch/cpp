#include<stdio.h>
void Display(int n1,int n2,int n3,int *t,float *p)
{
    *t= n1+n2+n3;
    *p=*t/3.0;
}
main()
{
    int m1,m2,m3,total;
    float per;
    printf("enter three subject marks: ");
    scanf("%d%d%d",&m1,&m2,&m3);
   Display(m1,m2,m3,&total,&per);
    printf("total marks: %d\n",total);
   printf("Per: %f\n",per);
}

