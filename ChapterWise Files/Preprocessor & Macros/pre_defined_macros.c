#include<stdio.h>

//There are a few pre-defined macros in C :

int main()
{
    //__DATE__ macro:
    //Current System Date.
    printf("Current date is: %s\n", __DATE__);

    //__TIME__ macro:
    //Current system time.
    printf("Current time is: %s\n", __TIME__);

    //__LINE__ macro:
    //Current line number of the program.
    printf("Current Line Number is: %d\n", __LINE__);

    //__FILE__ macro:
    //Name of the currently executing file.
    printf("The name of this file is: %s\n", __FILE__);

    //__STDC__ macro:
    //Contains 1 if the compiler is a Standard C compiler with ISO compliance.
    printf("C compiler standard is: %d\n", __STDC__);

    // __STDC_VERSION__ macro:
    // Contains the C standard version is the form yyyymmL 
    // Eg: 199409L for C89, ammended in 1994.
    //     199901L for C99
    //     201112L for C11
    printf("THe version number of C standard is: %d\n", __STDC_VERSION__);


    return 0;
}

// VTOP upload part for assignment 3 :: 
// define a file
// print a statement into a file.



