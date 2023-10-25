#include<stdio.h>
int main()
{
    int i=1,x=1,n;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=n)
    {
        x=x*i;
        i++;
    }
    printf("factorial of %d =%d",n,x);
    return 0;
}