#include<stdio.h>
int main()
{
    int n;
    printf("enter the year");
    scanf("%d",&n);
    if(n%4==0)
    {
         printf("%d=leap year",n);
    }
    else
    {
    
    
        printf("%d=not lear year",n);
    }
return 0;
}