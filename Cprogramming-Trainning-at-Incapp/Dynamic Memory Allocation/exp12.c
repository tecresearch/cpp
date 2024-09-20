#include<stdio.h>
int main()
{
	char *word = (char *)calloc(10, sizeof(char));
	if(word == NULL)
	{
        printf("Unable to allocate memory");
        exit(1);
    }
    puts("Enter single word");
    gets(word);
    printf("Entered word = %s\n", word);
     printf("Address of Entered word = %d\n", word);
    char *new_word = (char *)realloc(word, 20*sizeof(char));
    if(new_word == NULL)
    {
        printf("Unable to allocate memory");
        exit(1);
    }
    if(new_word != word)
    {
        free(word);
    }
    puts("Enter multiple words");
    gets(new_word);
    printf("Entered word = %s\n", new_word);
    printf("Address of Entered word = %d\n", word);
    free(new_word);
    return 0;
}
