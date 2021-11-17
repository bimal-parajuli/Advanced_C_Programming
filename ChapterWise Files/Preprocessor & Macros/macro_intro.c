#include<stdio.h>

#define x 4

#define c(n, k) {\
                printf("%d is the product of %d and %d\n", n*k, n, k);\
                printf("Done\n\n");\
                }

int main()
{
    printf("x is declared as : %d", x);

    c(5, 10);

    return 0;
}


