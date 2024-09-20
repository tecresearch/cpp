#include<stdio.h>
int main()
{
    int num1,num2,result,x;

    printf("press 1 for addition of two number.\n");
    printf("press 2 for Sub of two number.\n");
    printf("press 3 for Multi of two number.\n");
    printf("press 4 for Div of two number.\n");
    printf("press 5 for Mod of two number.\n");
    printf("Please enter your Choice\n");
    scanf("%d",&x);

    switch(x)
    {
        case 1:printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1+num2;
                    printf("addition of two numbers= %d\n",result);
                    break;
        case 2: printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1-num2;
                    printf("sub of two numbers= %d\n",result);
                    break;
        case 3: printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1*num2;
                    printf("multi of two numbers= %d\n",result);
                    break;
        case 4:printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1/num2;
                        printf("Div of two numbers= %d\n",result);
                        break;
        case 5: printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1%num2;
                    printf("mod of two numbers= %d\n",result);
                    break;
        default:printf("invalid input");
    }
    return 0;
}

