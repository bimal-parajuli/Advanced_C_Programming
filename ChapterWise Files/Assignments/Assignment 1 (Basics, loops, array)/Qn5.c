#include <stdio.h>

int func(int a, int *b)
{
    if (a % 5 == 0 && a % 6 == 0)
    {
        return 1;
    }
    else if (a % 5 == 0)
    {
        *b = 5;
        return a * 6;
    }
    else if (a % 6 == 0)
    {
        *b = 6;
        return a * 5;
    }
    return 0;
}
int main()
{
    int x, val, divisiblity = NULL;
    printf("Enter a number: ");
    scanf("%d", &x);
    val = func(x, &divisiblity);
    if (val == 0)
    {
        printf("Not divisible by 5 or 6.");
    }
    else if (val == 1)
    {
        printf("Divisible by both 5 and 6.");
    }
    else
    {
        printf("Result after multiplication is: %d and the divisibility is: %d", val, divisiblity);
    }
    return 0;
}
