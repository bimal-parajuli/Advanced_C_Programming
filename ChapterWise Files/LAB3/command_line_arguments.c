//try giving input arguments to the command line like:
//     ./{exefilepath}.exe {arg1} {arg2} {arg3}

#include<stdio.h>
int main(int num, char **chars)
{
    printf("\n\n%d arguments found..\n\n", num);
    printf("They are:\n");

    for(int i=0; i<num; i++)
    {
        printf("%s", *chars);
    }
    printf("\n\n");
    return 0;
}
