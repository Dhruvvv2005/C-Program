#include<stdio.h>
int main()
{
    char ch;
    double n1,n2,res;
    printf("enter the operation");
    scanf("%c",&ch);
    printf("enter the two number");
    scanf("%lf%lf",&n1,&n2);
    switch(ch)
    {
        case '+':
        {
            res=n1+n2;
            printf("result=%lf",res);
            break;
        }
         case '-':
        {
            res=n1-n2;
            printf("result=%lf",res);
            break;
        }
         case '*':
        {
            res=n1*n2;
            printf("result=%lf",res);
            break;
        }
         case '/':
        {
            res=n1/n2;
            printf("result=%lf",res);
            break;
        }
        default:
        {
            printf("enter the valid operator");
        }
    }
    return 0;
}