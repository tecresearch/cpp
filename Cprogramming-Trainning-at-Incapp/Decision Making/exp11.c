#include<stdio.h>
int main()
{
    int num1,num2,result;
    char x;

    printf("press a for addition of two number.\n");
    printf("press b for Sub of two number.\n");
    printf("press c for Multi of two number.\n");
    printf("press d for Div of two number.\n");
    printf("press e for Mod of two number.\n");
    printf("Please enter your Choice\n");
    scanf("%c",&x);

    switch(x)
    {
        case 'c': printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1*num2;
                    printf("multi of two numbers= %d\n",result);
                    break;
        case 'a':printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1+num2;
                    printf("addition of two numbers= %d\n",result);
                    break;

        case 'b': printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1-num2;
                    printf("sub of two numbers= %d\n",result);
                    break;

        case 'd':printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1/num2;
                        printf("Div of two numbers= %d\n",result);
                        break;
        case 'e': printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1%num2;
                    printf("mod of two numbers= %d\n",result);
                    break;
        default:printf("invalid input");
    }
    return 0;
}


