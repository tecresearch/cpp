#include<stdio.h>
main()
{
    char word1[20],word2[20];
    int l=0;
    printf("enter first word: \n");
    scanf("%s",&word1);

  printf("word1= %s\n",word1);
   strcpy(word2,strrev(word1));
     printf("word2= %s\n", word2);
}


