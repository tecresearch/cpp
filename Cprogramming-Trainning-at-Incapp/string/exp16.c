#include<stdio.h>
main()
{
    char word1[20],word2[20];
   int l1=0,l2=0,p=0;

    printf("enter first word: \n");
    scanf("%s",&word1);
    printf("enter second word: \n");
    scanf("%s",&word2);
   int x=strcmp(word1,word2);

   printf("\nx= %d\n",x);



                   if(x)
                {
                    printf("%s is not equal to %s",word1,word2);
                }
                else{
                     printf("%s is equal to %s",word1,word2);
                }


}

