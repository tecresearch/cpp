#include<stdio.h>
main()
{
      int marks[3][5],i,j,total[3];
      float per[3];
      for(i=0;i<3;i++)
      {
            printf("enter %d student marks: \n",i+1);
            for(j=0;j<5;j++)
            {
                printf("enter %d subject: ",j+1);
                scanf("%d",&marks[i][j]);
            }
      }
      printf("\n--------------------------------------------\n");
       for(i=0;i<3;i++)
      {
            printf("%d. student marks are : \n",i+1);
            total[i]=0;
            for(j=0;j<5;j++)
            {
                total[i]=total[i]+marks[i][j];
                printf("%d. subject= %d\n",j+1,marks[i][j]);
            }
            per[i]=total[i]/5.0;
            printf("%d Student Total Marks : %d\n",i+1,total[i]);
             printf("%d Student Percentage : %.2f\n",i+1,per[i]);
            printf("\n______________________________\n");
      }

}


