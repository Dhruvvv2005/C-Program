#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    if(n<=10)
    {
    while(n<=10)
    {
        sum=+n;
    n++;
     }
      printf("%d",sum);
    }
    else

    {
        printf("%d",n);
    }
    
}