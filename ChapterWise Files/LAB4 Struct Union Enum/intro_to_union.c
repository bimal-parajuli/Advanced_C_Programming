#include<stdio.h>

//Unions are declared and provided value like struct only.
//The size consumed  by a union is equal to the largest one inside it.
//So that it can be used as either data type declared inside it but not all.


//So a structure can hold only one value but it can be of any type
//among the ones that are declared inside it.

int main()
{

    union myunion
    {
        int x;
        long long y;
        char z;
    };

    union myunion arr[3];
    arr[0].x = 69;
    printf("The stored value in struct is : %d and has size %d",arr[0].x, sizeof(arr[0]) );
}
