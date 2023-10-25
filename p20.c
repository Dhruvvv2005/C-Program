#include <stdio.h>
int main()
{
    int d, t, y;
    printf("enter the date month year\n");
    scanf("%d%d%d", &d, &t, &y);
    if (y % 4 == 0)
    {
        if (t == 1 || t == 3 || t == 5 || t == 7 || t == 10 || t == 12)
        {
            if (d <= 31)
            {
                printf("correct date");
            }
            else
            {
                printf("not correct date");
            }
        }
        else
        {
            if (t == 4 || t == 6 || t == 8 || t == 9 || t == 11)
            {
                if (d <= 30)
                {
                    printf("correct date");
                }
                else
                {
                    printf("not correct date");
                }
            }
            else
            {
                if (t == 2 && d <= 29)
                {
                    printf("correct date");
                }
                else
                {
                    {
                        printf(" not correct date");
                    }
                }
            }
        }
    }
    else
    {
        if (t == 1 || t == 3 || t == 5 || t == 7 || t == 10 || t == 12)
        {
            if (d <= 31)
            {
                printf("correct date");
            }
            else
            {
                printf("not correct date");
            }
        }
        else
        {
            if (t == 4 || t == 6 || t == 8 || t == 9 || t == 11)
            {
                if (d <= 30)
                {
                    printf("correct date");
                }
                else
                {
                    printf("not correct date");
                }
            }
            else
            {
                if (t == 2 && d <= 28)
                {
                    printf("correct date");
                }
                else
                {
                    {
                        printf(" not correct date");
                    }
                }
            }
        }
        return 0;
    }
}