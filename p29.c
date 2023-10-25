#include<stdio.h>
int main()
{
    int n,y,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(;n>0;)
    {
        y=n%10;
        sum=sum*10+y;
        n=n/10;
    }
    printf("%d=reverse",sum);
    return 0;
}
