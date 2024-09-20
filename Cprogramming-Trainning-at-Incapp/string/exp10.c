#include<stdio.h>
main()
{
    char word1[20],word2[20];
    int l=0;
    printf("enter first word: \n");
    scanf("%s",&word1);
    for(int j=0;word1[j]!='\0';j++)
    {
        l++;
    }
    for(int i=0,j=l-1;j>=0;i++,j--)
    {
        word2[i]=word1[j];
    }
  printf("word1= %s\n",word1);
   printf("word2= %s\n",word2);
}

