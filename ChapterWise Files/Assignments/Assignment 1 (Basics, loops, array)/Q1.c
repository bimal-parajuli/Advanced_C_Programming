#include<stdio.h>

int main()
{
    int n, x;
    double db1=1, db2=1;
    printf("Enter the value of 2 positive integers n  x  :");
    scanf("%d %d", &n, &x);


    printf("\n\nThe series 1 + %d + 2*%d + 3*%d... results ", x, x, x);
    for (int i=1; i<n; i++)
    {
        db1 += (i*x)/1.0;
    }
    printf("%.1lf", db1);


    printf("\n\nThe series 1 + %d/2 + 2%d/3 + 3%d/4... results ", x, x, x);
    for(int i=0; i<n; i++)
    {
        db2 += ((double)(i*x))/(i+1);
    }
    printf("%.4lf\n\n", db2);

    return 0;
}
