#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,n5,avg;
    printf("enter the 1st number marks");
    scanf("%lf",&n1);
    printf("enter the 2st number marks");
    scanf("%lf",&n2);
    printf("enter the 3st number marks");
    scanf("%lf",&n3);
    printf("enter the 4st number marks");
    scanf("%lf",&n4);
    printf("enter the 5st number marks");
    scanf("%lf",&n5);
    avg=(n1+n2+n3+n4+n5)/5;
    printf("avg=%lf",avg);
    return 0;
}