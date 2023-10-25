#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,c=0;
    printf("enter the number\n");
    scanf("%d",&n);
    int x=n;
    int y=n;
    while (x>0)
    {
       x=x/10;
       c++;

    }
    while(n>0)
    {
        int y=n%10;
        sum=sum+pow(y,c);
        n=n/10;
    }
    if(sum==y)
    {
        printf("amstrong number");
    }
    else
    {
       printf(" not amstrong number"); 
    }
}