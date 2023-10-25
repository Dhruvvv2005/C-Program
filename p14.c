#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter the first number");
    scanf("%d",&n1);
    printf("enter the second number");
    scanf("%d",&n2);
    printf("enter the third number");
    scanf("%d",&n3);
    if(n1>n2&&n1>n3)
    {
         printf("%d=greatest",n1);
    }
    else
    {
    if(n2>n1&&n2>n3)
    {
       printf("%d=greatest",n2);
    }
    else
    {
        printf("%d=greatest",n3);
    }
    }
return 0;
}