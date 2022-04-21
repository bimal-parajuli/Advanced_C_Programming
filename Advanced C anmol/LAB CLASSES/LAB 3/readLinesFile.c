/* Program to read a text file line by line  */

#include <stdio.h>

int main(int argc, char *argv[])
{
    // read any text file from currect directory
    char const *const fileName = "demofile.txt.txt";

    FILE *file = fopen("demofile.txt", "r");

    if (!file)
    {
        printf("\n Unable to open : %s ", fileName);
        return -1;
    }

    char line[500];
    int i = -1;
    int m,n;
    printf("Enter the strating line of file i,e M: \n ");
    scanf("%d", &m);
    printf("Enter the ending line of file i,e N: \n ");
    scanf("%d", &n);

    while (fgets(line, sizeof(line), file))
    {
        i += 1;
        if (i >= m - 1 && i < n)

            printf("%s", line);
    }
    fclose(file);
    return 0;
}