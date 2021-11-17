// Use only bitwise operators  and control statments for the following:

// a. Check whether two numbers are equal

// b. Check whether a number is odd or even

// c. Check whether a number is positive or negative (note: the first bit is zero if it is positive)

#include<stdio.h>
void isequal(int x, int y) ;
void iseven(int x);
void ispositive(int x);
int main()
{
    int a, b;

    printf("\n\nEnter two numbers to check equality:  ");
    scanf("%d %d", &a, &b);
    isequal(a, b);

    printf("\n\nEnter two numbers to check odd/even:  ");
    scanf("%d %d", &a, &b);
    iseven(a);
    iseven(b);

    printf("\n\nEnter two numbers to check +ve/-ve:  ");
    scanf("%d %d", &a, &b);
    ispositive(a);
    ispositive(b);

    return 0;
}


//function to check by bit manippulation if two numbers are equal by comparing two numbers bit by bit.
//if any corresponding bit are unequal, the numbers are unequal. Else equal
//bitwise xor. If all bits are not same, they're not equal. Else equal
void isequal(int x, int y)
{
    if(x ^ y)
    {
    printf("\n\n%d and %d are not equal.", x, y);
    }
    else
    {
    printf("\n\n%d and %d are equal.", x, y);
    }
    return;
}

//function to check an display if a number is even or odd by bit manipulation.
//if last bit is 1, its odd. Else its even.
void iseven(int x)
{
    if(x&1)
    {
        printf("\n\n%d is odd", x);
        return;
    }
    printf("\n\n%d is even", x);
    return;
}

//function to check and display if a number is positive or negative.
//If the first bit is 1, its negative. Else its positive.
void ispositive(int x)
{
    if(x & (1 << 31))
    {
        printf("\n\n%d is negative.", x);
        return;
    }
    printf("\n\n%d is positive.", x);
    return;
}
