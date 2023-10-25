#include<stdio.h>
int main()
{

    int n;
    printf("enter 1 for rectangle \n 2 \n for square 3 for circle \n 4 for triangle");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            double l,b,res;
            printf("enter the length and breadth");
            scanf("%lf%lf",&l,&b);
            res=l*b;
            printf("result=%lf",res);
                    break;
        }
         case 2:
        {
            double res,a;
            printf("enter the side");
            scanf("%lf",a);
            res=a*a;
            printf("result=%lf",res);
                    break;
        }
         case 3:
        {
           double r,res;
            printf("enter the radius");
            scanf("%lf",&r);
             res=3.14*r*r;
            printf("result=%lf",res);
                    break;
        }
         case 4:
        {
            int l,b,res;
            printf("enter base and height");
            scanf("%lf",&l,&b);
             res=0.5*b*l;
            printf("result=%d",res);
                    break;
        }

        default:
        {
            printf("enter the valid statement ");
        }
    }
}