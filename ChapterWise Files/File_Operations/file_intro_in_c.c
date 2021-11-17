#include<stdio.h>
/*

List of all files opening modes ::
    r - open a file in read mode
    w - opens or create a text file in write mode
    a - opens a file in append mode
    r+ - opens a file in both read and write mode
    a+ - opens a file in both read and write mode
    w+ - opens a file in both read and write mode


FILES - Printf and Scanf 
    int fprintf(FILE *stream, const char * str, arguments);
    int fscanf(FILE *stream, const char * format, arguments);

    Example ::
    int fprintf(fptr, "%s", str);
    int fscanf(fptr, "%s", str);

*/


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