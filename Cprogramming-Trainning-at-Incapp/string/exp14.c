#include<stdio.h>
main()
{
    char word1[20],word2[20];
   int l1=0,l2=0,p=0;

    printf("enter first word: \n");
    scanf("%s",&word1);
    printf("enter second word: \n");
    scanf("%s",&word2);
    for(int i=0;word1[i]!='\0';i++)
    {
        l1++;
    }
    for(int i=0;word2[i]!='\0';i++)
    {
        l2++;
    }

        if(l1 !=l2)
        {
            printf("%s is not equal to %s becos length is not equal.\n",word1,word2);
        }
        else{
                   for( int i=0;i<l1;i++)
                   {
                       if(word1[i]!=word2[i])
                       {
                           p=1;
                           break;
                       }
                   }
                   if(p==1)
                {
                    printf("%s is not equal to %s",word1,word2);
                }
                else{
                     printf("%s is equal to %s",word1,word2);
                }
        }

}



