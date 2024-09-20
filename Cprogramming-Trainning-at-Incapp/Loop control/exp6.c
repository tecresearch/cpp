#include<stdio.h>
main()
{
    int a=10;
    printf("start\n");
    printf("a value before for = %d\n",a);
    for(;a<=10;a++)
    {
        printf("%d . hello\n",a);
    }
    printf("after for loop a= %d\n",a);
    printf("end\n");
}

