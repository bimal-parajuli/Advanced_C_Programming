#include<stdio.h>

int sub(int, int);
int* mul();
int p[10];


int main(int c, char*arg[])
{
    int *ptr, j=2, *ptr1;
    ptr = &j;
    ptr1 = mul();
    printf("%d\n", ptr1[0]);
}

int * mul()
{
    // int p[10];
    p[0] = 10;
    printf("%d\n", p[0]);
    // *p += 12;
    return p;
}



