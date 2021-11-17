#include<stdio.h>

//function 1:
int printnums(int i, int j)
{
    printf("The numbers are: %d and %d\n", i, j);
    return 0;
}

//function 2:
int add(int i, int j)
{
    printf("Sum is: %d\n", i+j);
    return i+j;
}

//function 3:
int multiply(int i, int j)
{
    printf("Product is: %d\n", i*j);
    return i*j;
}

//function 4:
int divide(int i, int j)
{
    printf("Divide is: %d\n", i/j);
    return i/j;
}

//function 5:
int subtract(int i, int j)
{
    printf("Difference is: %d\n", i-j);
    return i-j;
}




int main()
{

    int (*funptr[5])(int, int) = {printnums, add, multiply, divide, subtract};

    for(int i=0; i<5; i++)
    {
        funptr[i](20, 8);
    }
    return 0;
}

