#include<stdio.h>
main()
{
     int num;
    printf("enter size: \n");
    scanf("%d",&num);
    int x=1,y=(num/2);

    for(int i=1;i<=num;i++)
    {
            if(i<=(num+1)/2)
            {
                for(int k=1;k<=y;k++)
                {
                    printf("  ");
                }
                for(int j=1;j<=x;j++)
                {
                    printf(" *");
                }
                x+=2;
                y--;
                printf("\n");
        }
        else
        {
           x=x-2;
           y=y+1;

               for(int k=1;k<=y+1;k++)
               {
                   printf("  ");
               }
               for(int j=1;j<=x-2;j++)
               {
                   printf(" *");
               }
            printf("\n");

        }

    }
}

