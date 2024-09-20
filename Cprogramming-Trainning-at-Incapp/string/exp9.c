#include<stdio.h>
main()
{
    char word1[20],word2[20];
    printf("enter first word: \n");
    scanf("%s",&word1);
    for(int i=0;word1[i]!='\0';i++)
    {
        word2[i]=word1[i];
    }
  printf("word1= %s\n",word1);
   printf("word2= %s\n",word2);
}
