#include<stdio.h>
void main()
{
    int *p, a[900] ={1,2,4,5,5}, q=1;
    p=&a[0];
    printf("%d", *(p+2));
    printf("%p", a);

    void* voidptr = a;

    int arr[3][3] = {1,2,3,4,5,6,7};

    for(int i=0; i<3; i++)
        {
            for(int j=0; j<2; j++)
            {
                printf("\n%d", arr[i][j]);
            }
        }
}
