#include<stdio.h>
int main()
{
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
         case 'C':
        case 'c': printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1*num2;
                    printf("multi of two numbers= %d\n",result);
                    break;
        case 'A':
        case 'a':printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1+num2;
                    printf("addition of two numbers= %d\n",result);
                    break;
         case 'B':
        case 'b': printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1-num2;
                    printf("sub of two numbers= %d\n",result);
                    break;
        case 'D':
        case 'd':printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1/num2;
                        printf("Div of two numbers= %d\n",result);
                        break;
         case 'E':
        case 'e': printf("enter two number: ");
                    scanf("%d%d",&num1,&num2);
                    result=num1%num2;
                    printf("mod of two numbers= %d\n",result);
                    break;
        default:printf("invalid input");
    }
    return 0;
}


