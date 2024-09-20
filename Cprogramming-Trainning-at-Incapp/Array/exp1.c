#include <stdio.h>

int c=0;
void fibonacci(int a,int b,int n)
{
    if(n > 0)
    {
        c = a+b;
        printf("%d \n",c);
        fibonacci(b,c,--n);
    }
}

int main()
{
    int num;
    printf("enter a number \t");
    scanf("%d",&num);
    printf("0 \n");
    fibonacci(0,1,num);
    return 0;
}
