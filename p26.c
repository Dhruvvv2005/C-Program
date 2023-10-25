#include<stdio.h>
int main()
{
    int n,i=1,a=0,c,b=1;
    printf("enter the number");
    scanf("%d",&n);
     printf("%d\n",a);
      printf("%d\n",b);
   do
   {

    c=b+a;
    printf("%d\n",c);
    a=b;
    b=c;
    i++;
   
   }while(i<=n);
    return 0;
}
