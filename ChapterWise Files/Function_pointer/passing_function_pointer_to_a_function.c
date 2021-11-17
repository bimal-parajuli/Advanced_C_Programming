#include<stdio.h>

int callf(int (*) (int, int));
int sub(int, int);
int summer(int, int);


int main()
{
    int i;
    int (*funptr1)(int, int) = summer;
    callf(funptr1);
    return 0;
}

int callf(int (*funpi)(int, int))
{
    funpi(2, 3);
}


int summer(int i, int j)
{
    printf("The sum of %d and %d is: %d",i, j, i+j);
    return i+j;
}



