#include<stdio.h>

int main()
{

    enum my_enum {pop=69, foo=42, bar, tata};
    enum my_enum wtfbro;
    enum my_enum nthbro;
    enum my_enum sthbro;
    enum my_enum ayeaye;

    wtfbro =pop;

    sthbro = foo;

    nthbro =bar;

    ayeaye =tata;

    printf("%d, %d,  %d, %d", wtfbro, sthbro, nthbro, ayeaye);
    return 0;
}
