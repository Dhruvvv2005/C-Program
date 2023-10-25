#include<stdio.h>
int main()
{
    double h,b,area;
    printf("enter the height and base ");
    scanf("%lf%lf",&h,&b);
    area=0.5*b*h;
    printf("area =%lf ",area);
    return 0;
}