// Here char *argenv[] is used to pass the environment variable into the program.

#include<stdio.h>
int main(int c, char *argv[], char *argenv[])
{
    int i=0;
    while(argenv[i] != NULL)
    {
        printf("%s\n", argenv[i]);
        i++;
    }

}
