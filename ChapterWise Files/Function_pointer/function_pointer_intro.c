#include<stdio.h>
#include<stdlib.h>


void funct(int);
int main()
{
    int j=10;
    void(*funcptr)(int j) = funct;
}

void funct(int i)
{
    printf("%d", i);
}