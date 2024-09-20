#include<stdio.h>
main()
{
    int a;
    printf("start\n");
    for(a=1;a<=10;printf("a in update = %d\n",++a))
    {
        printf("%d . hello\n",a);
    }
    printf("after for loop a= %d\n",a);
    printf("end\n");
}


