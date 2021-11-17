#include<stdio.h>

int main()
{
    int x=4, y=5, z=6, w;
    w= z%x;          //modulus operator.
    x= sizeof(int);
    printf("%d\n", w);
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    return 0;
}
