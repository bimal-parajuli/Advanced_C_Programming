#include<stdio.h>



struct struct1
{

    int some_int;
    float some_float;
    char somr_char;
    double some_char;
};

struct struct2
{

    double some_double;
    int some_int;
    char some_char;
    float some_float;
};
int main()
{
    struct struct1 s1;
    printf("The size of struct1's object s1 is: %d\n",sizeof(s1) );

    printf("size of int, float, char and double are: %d, %d, %d and %d\n\n", sizeof(int), sizeof(float), sizeof(char), sizeof(double) );

    struct struct2 s2;
    int counter =1;
    s2.some_char='\0';
    for (int i=1; i<=(sizeof(char)*8-1); i++)
    {
        s2.some_char += s2.some_char | counter;
        counter = 1 << i;
    }
    printf("\n\n\n the result is: %d \n\n\n", s2.some_char);
    printf("The size of struct2's object s2 is: %d\n",sizeof(s1) );

    printf("size of double, int, char and float are: %d, %d, %d and %d\n\n", sizeof(double), sizeof(int), sizeof(char), sizeof(float) );

    return 0;
}
