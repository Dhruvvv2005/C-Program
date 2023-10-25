#include<stdio.h>
int main()
{
    int n,i=1,sum;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=10)
   {
    sum=n*i;
    printf("%d*%d=%d\n",n,i,sum);
    i++;
   }
    return 0;
}
