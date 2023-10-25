#include<stdio.h>
int main()
{
    int n,a,x=1;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the power");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        x=x*n;
        printf("%d power of %d =%d\n",i,n,x);

    }
return 0;
}