#include<stdio.h>

void writemode()
{

       system("cls");
        FILE *f;
       char filename[20];
      printf("enter file name with extension.\n");
      scanf("%s",&filename);
      f=fopen(filename,"w");
      printf("your file is created successfully.\n");
      char a;
      printf("enter your msg: \n");
      fflush(stdin);
      a=getchar();
      while(a!='\n')
      {
          putc(a,f);
          a=getchar();
      }
      fclose(f);
      printf("Your msg writing is complete & saved.\n");
}
void appendmode()
{
    system("cls");
     FILE *f;
       char filename[20];
      printf("enter file name with extension for append mode.\n");
      scanf("%s",&filename);
      f=fopen(filename,"a");
      printf("your file is created successfully.\n");
      char a;
      printf("enter your msg: \n");
        fflush(stdin);
        a=getchar();
      while(a!='\n')
      {
          putc(a,f);
          a=getchar();
      }
      fclose(f);
      printf("Your msg writing is complete & saved.\n");
}
void readmode()
{
      system("cls");
     FILE *f;
        char filename[20],ch;
        printf("enter your file name to read with extension :\n");
        scanf("%s",&filename);
        f=fopen(filename,"r");
        if(f==NULL)
        {
            printf("this file is not exit.");
        }
        else{
                printf("your msg: \n");
            while((ch=getc(f))!= EOF)
            {
                putchar(ch);
            }
            printf("\nFile reading complete.\n");
        }
        fclose(f);

}
void viewcode()
{
      system("cls");
     FILE *f;
        char ch;
        f=fopen("exp16.c","r");
        if(f==NULL)
        {
            printf("this file is not exit.");
        }
        else{
                printf("your msg: \n");
            while((ch=getc(f))!= EOF)
            {
                putchar(ch);
            }
            printf("\n-------------------------------------------\n");
        }
        fclose(f);
}
void charcount()
{
      system("cls");
     FILE *f;
    char filename[20],ch;
    int scount=0,ccount=0,special=0,number=0,space=0;
        printf("enter your file name with extension to check char count  :\n");
        scanf("%s",&filename);
        f=fopen(filename,"r");
        if(f==NULL)
        {
            printf("this file is not exit.");
        }
        else{
            while((ch=getc(f))!= EOF)
            {
                if(ch>='a' && ch<='z')
                {
                    scount++;
                }
                else if(ch>='A' && ch<='Z')
                {
                    ccount++;
                }
                else if(ch>='0' && ch<='9')
                {
                    number++;
                }
                else if(ch==' ')
                {
                    space++;
                }
                else
                {
                    special++;
                }
                putchar(ch);
            }
            printf("\n\ntotal small letter:  %d\n",scount);
            printf("\ntotal capital letter:  %d\n",ccount);
            printf("\ntotal number :  %d\n",number);
            printf("\ntotal space :  %d\n",space);
            printf("\ntotal special char:  %d\n",special);
        }
        fclose(f);
}
main()
{
    char ch;
    do
    {
          system("cls");
                  int x;
             printf("press 1 to create a file in write mode.\n");
             printf("press 2 to create a file in append mode.\n");
             printf("press 3 to read from a file.\n");
             printf("press 4 to find out no of char in file.\n");
             printf("press 5 to view all the code of file.\n");
             printf("press 6 to exit from application.\n");
             printf("enter your choice: ");
             scanf("%d",&x);
             switch(x)
             {
                     case 1:   writemode();
                                    break;
                     case 2:  appendmode();
                                    break;
                     case 3:   readmode();
                                    break;
                     case 4:   charcount();
                                    break;
                     case 5:viewcode();
                                    break;
                     case 6:exit(0);
                     default: printf("wrong input.");
             }
             printf("do you want to run it again. if yes then press y/Y:");
             fflush(stdin);
             scanf("%c",&ch);
    }while(ch=='y' || ch=='Y');

}
