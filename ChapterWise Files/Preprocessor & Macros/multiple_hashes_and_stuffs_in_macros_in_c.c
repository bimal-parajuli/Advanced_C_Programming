#include<stdio.h>

#define funny(A) #A
#define fun(A, B) A##B


int main()
{

    printf("%s\n", funny(This becomes a string));


    printf("\n\nAnd we concatenate it like this :: %d", fun(3, 5));

    return 0;
}