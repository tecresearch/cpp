#include<stdio.h>
main()
{
    char x='a';
    for(int i=1;i<=4;i++)
    {
        x='a';
        for(int j=1;j<=i;j++)
        {
            printf("  %c ",x);
            x++;
        }

        printf("\n");
    }
}

