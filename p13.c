#include<stdio.h>
int main()
{
    char ch;
    printf("enter the input");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
         printf("%c=lower alphabet",ch);
    }
    else
    {
    if(ch>='A'&&ch<='Z')
    {
        printf("%c=upper alphabet",ch);
    }
    else
    {
        if(ch>='0'&&ch<='9')
        {
            printf("%c=digit",ch);
        }
        else
        {
            printf("%c=special character",ch);
        }
    }
    }
return 0;
}