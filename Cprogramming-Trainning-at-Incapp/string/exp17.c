#include<stdio.h>
main()
{
    char word[20];
    int s=0;
    printf("enter a word: ");
    scanf("%s",&word);
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]>='0' && word[i]<='9')//(word[i]=='a' || word[i]=='e')
        {
            s++;
        }
    }
     printf("%s contains %d digits.",word,s);
}
