#include<stdio.h>
int main()
{
    int n,c=0;
    printf("enter the number\n");
    scanf("%d",&n);
    while (n>0)
    {
       n=n/10;
       c++;
    }
    printf("number of digit=%d",c);
    return 0;
}