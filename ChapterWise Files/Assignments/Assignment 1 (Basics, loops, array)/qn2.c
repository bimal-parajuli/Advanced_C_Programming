#include <stdio.h>

void mul10(int *max)
{
    *max = *max * 10;
}

int divisible(int);

int main()
{
    int a, b, c, d, max = 0;
    printf("Enter four numbers: a b c d -");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max = 0;
    if (divisible(a))
    {
        if (a > max)
        {
            max = a;
        }
    }
    if (divisible(b))
    {
        if (b > max)
        {
            max = b;
        }
    }
    if (divisible(c))
    {
        if (c > max)
        {
            max = c;
        }
    }
    if (divisible(d))
    {
        if (d > max)
        {
            max = d;
        }
    }

    if (max == 0)
    {
        printf("No any number satisfied divisibility.");
    }
    else
    {
        mul10(&max);
        printf("The required output is: %d", max);
    }
    return 0;
}

int divisible(int x)
{
    if ((x % 2 == 0 && x % 3 == 0) || x % 5 == 0)
    {
        return 1;
    }
    return 0;
}
