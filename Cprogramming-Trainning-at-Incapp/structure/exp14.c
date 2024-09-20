#include<stdio.h>
int main()
{
    enum calci
    {
        addition=11, Sub=78,Multi=89,Div,Mod
    };
    int num1,num2,result;
    int x;

    printf("press 0 for addition of two number.\n");
    printf("press 1 for Sub of two number.\n");
    printf("press 2 for Multi of two number.\n");
    printf("press 3 for Div of two number.\n");
    printf("press 4 for Mod of two number.\n");
    printf("Please enter your Choice\n");
    scanf("%d",&x);

    switch(x)
    {

        case Multi: printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1*num2;
                    printf("multi of two numbers= %d\n",result);
                    break;

        case addition:printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1+num2;
                    printf("addition of two numbers= %d\n",result);
                    break;

        case Sub: printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1-num2;
                    printf("sub of two numbers= %d\n",result);
                    break;

        case Div:printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1/num2;
                        printf("Div of two numbers= %d\n",result);
                        break;

        case Mod: printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1%num2;
                    printf("mod of two numbers= %d\n",result);
                    break;
        default:printf("invalid input");
    }
    return 0;
}

