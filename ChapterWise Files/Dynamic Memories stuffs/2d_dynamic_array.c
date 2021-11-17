//  *(*(p+i)+j) === p[i][j]
//Accessing the ith row and the jth column.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p[10], i;

    for (int i = 0; i < 10; i++)
    {
        p[i] = (int *)calloc(5, sizeof(int));
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d    ", *(*(p + i) + j));
        }
        printf("\n");
    }
    return 0;
}

//  *(*(p+i)+j) === p[i][j]
//Accessing the i_th row and the j_th column.