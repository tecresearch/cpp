#include<stdio.h>
main()
{
    int marks[6],i, total=0;
    float per;
    printf("enter six subject marks: \n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("Six subject marks are: \n");
    for(i=0;i<6;i++)
    {
        total=total+marks[i];
        printf("marks of subject %d= %d\n",i+1,marks[i]);
    }
    printf("total marks: %d\n",total);
    per=(float)total/6;
     printf("Percentage: %f",per);
}

