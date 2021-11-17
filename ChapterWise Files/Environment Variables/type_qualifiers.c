// Here 'Const' and 'volatile' are a type qualifier.
//Type qualifiers are used to modify the type of a variable or function.


#include<stdio.h>

int main(int c, char *argv[], char *argenv[])
{
    const int x=9;

    volatile int v=20;


    printf("%d\n",x);

    printf("%d\n",v);

}

