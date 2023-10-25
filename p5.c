#include <stdio.h>
int main()

{
double p,r,t,si;
printf("enter the principal rate time\n");
scanf("%lf%lf%lf",&p,&r,&t);
si=(p*r*t)/100;
printf("s.i =%lf",si);
return 0;
}