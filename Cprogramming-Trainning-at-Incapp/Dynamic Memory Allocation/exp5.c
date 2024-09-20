#include<stdio.h>
main()
{
    char *a=(char *)malloc(sizeof(char));
    if(a==NULL)
    {
        printf("Memory allocation Failed");
        exit(1);
    }
    printf("Enter a Char: ");
    scanf("%c",a);
    printf("value at a address :  %c\n", *a);
    free(a);
    printf("\n value at a address after free =  %c\n", *a);

}

