#include<stdio.h>

int main()
{

    FILE * ptr;
    
    char mychararray[500];

    ptr = fopen("myfile.txt", "r");

    fscanf(ptr, "%s", mychararray);

    
    fprintf(ptr, "LOL");

    fclose(ptr);

    return 0;
}