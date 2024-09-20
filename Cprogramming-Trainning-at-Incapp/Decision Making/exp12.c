#include<stdio.h>
int main()
{
    int num1,num2,result;
    char x;

    printf("press + for addition of two number.\n");
    printf("press - for Sub of two number.\n");
    printf("press * for Multi of two number.\n");
    printf("press / for Div of two number.\n");
    printf("press @ for Mod of two number.\n");
    printf("Please enter your Choice\n");
    scanf("%c",&x);

    switch(x)
    {
        case '*': printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1*num2;
                    printf("multi of two numbers= %d\n",result);
                    break;
        case '+':printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1+num2;
                    printf("addition of two numbers= %d\n",result);
                    break;

        case '-': printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1-num2;
                    printf("sub of two numbers= %d\n",result);
                    break;

        case '/':printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1/num2;
                        printf("Div of two numbers= %d\n",result);
                        break;
        case '@': printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1%num2;
                    printf("mod of two numbers= %d\n",result);
                    break;
        default:printf("invalid input");
    }
    return 0;
}
