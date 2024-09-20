#include<stdio.h>
main()
{
    int x=10;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("  %d ",x);
             x+=2;
        }
        printf("\n");
    }
}
