#include <stdio.h>

int two(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }

    return 0;
}


int three(int x)
{
    if (x % 3 == 0)
    {
        return 1;
    }

    return 0;
}


int four(int x)
{
    if (x % 4 == 0)
    {
        return 1;
    }

    return 0;
}


int five(int x)
{
    if (x % 5 == 0)
    {
        return 1;
    }

    return 0;
}


int six(int x)
{
    if (x % 6 == 0)
    {
        return 1;
    }

    return 0;
}


int seven(int x)
{
    if (x % 7 == 0)
    {
        return 1;
    }

    return 0;
}


void evencheck(int (*twocheck)(int), int (*fourcheck)(int), int (*sixcheck)(), int a)
{
    int count = 0;
    if (twocheck(a))
    {
        printf("divisible by 2\n");
        count += 1;
    }
    if (fourcheck(a))
    {
        printf("divisible by 4\n");
        count += 1;
    }
    if (sixcheck(a))
    {
        printf("divisible by 6\n");
        count += 1;
    }

    printf("\n\nGiven number %d is divisible by %d even numbers\n\n", a, count);
}


void oddcheck(int (*threecheck)(int), int (*fivecheck)(int), int (*sevencheck)(), int a)
{
    int count = 0;
    if (threecheck(a))
    {
        printf("divisible by 3\n");
        count += 1;
    }
    if (fivecheck(a))
    {
        printf("divisible by 5\n");
        count += 1;
    }
    if (sevencheck(a))
    {
        printf("divisible by 7\n");
        count += 1;
    }

    printf("\n\nGiven number %d is divisible by %d odd numbers\n\n", a, count);
}


int main()
{

    int even, odd;
    int (*funcptrarray[6])(int) = {two, three, four, five, six, seven};

    printf("Enter the number to check divisibility by even numbers(2,4,6)   ::  ");
    scanf(" %d", &even);

    evencheck(funcptrarray[0], funcptrarray[2], funcptrarray[4], even);



    printf("Enter the number to check divisibility by odd numbers(3,5,7)   ::  ");
    scanf(" %d", &odd);

    oddcheck(funcptrarray[1], funcptrarray[3], funcptrarray[5], odd);

    return 0;
}



