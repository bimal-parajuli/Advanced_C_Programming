#include<stdio.h>


int callf(int (*c[])(int, int));
int sub(int, int);
int mul(int, int);





int main()
{
    int i;
    char name = 'c';
    int (*funptr1[])(int, int) = {mul, sub};
    callf(funptr1);
}






int callf(int (*funpi[]) (int, int))
{
    int i;
    for(i=0; i<2; i++)
    {
        funpi[i](2, 3);
        printf("\n");
    }

    return 0;
}






int mul(int i, int j)
{
    printf("%d", i*j);
    return i*j;
}

