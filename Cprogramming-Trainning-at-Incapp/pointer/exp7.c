#include<stdio.h>
void Display(int n1,int n2,int n3)
{
    int total;
    total= n1+n2+n3;
    float per;
    per=total/3.0;
    printf("total marks: %d\n",total);
    printf("Per: %f\n",per);
}
main()
{
    int m1,m2,m3,total,per;
    printf("enter three subject marks: ");
    scanf("%d%d%d",&m1,&m2,&m3);
    Display(m1,m2,m3);

}


