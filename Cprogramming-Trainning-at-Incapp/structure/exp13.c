#include<stdio.h>
int main()
{
    enum calci
    {
        addition='a', Sub='b',Multi='c',Div ='d',Mod='e'
    };
    int num1,num2,result;
    char x;

    printf("press a/A for addition of two number.\n");
    printf("press b/B for Sub of two number.\n");
    printf("press c/C for Multi of two number.\n");
    printf("press d/D for Div of two number.\n");
    printf("press e/E for Mod of two number.\n");
    printf("Please enter your Choice\n");
    scanf("%c",&x);

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

