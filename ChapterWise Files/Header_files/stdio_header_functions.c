#include<stdio.h>
int main()
{
    char myarray[] = "String1";
    int a = 234;
    float f = 234.25;
    printf("---%9d----%.2f\n", a, f);
    printf("--%10s--\n", myarray);
    return 0;
}
