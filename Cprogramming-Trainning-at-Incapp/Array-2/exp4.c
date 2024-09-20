#include<stdio.h>
main()
{
    int m[3][3];
    printf("enter number is 3 by 3 matrix: ");
    for(int i=0;i<3;i++)
    {
        for(int k=0;k<3;k++)
        {
            scanf("%d",&m[i][k]);
        }
    }
    printf("Number is 3 by 3 matrix are:\n");
    for(int i=0;i<3;i++)
    {
        for(int k=0;k<3;k++)
        {
            printf("m[%d][%d]= %d\t",i,k,m[i][k]);
        }
        printf("\n");
    }
}
