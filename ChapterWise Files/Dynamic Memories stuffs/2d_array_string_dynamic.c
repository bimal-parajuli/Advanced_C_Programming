#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *p[5];
    for(int i=0; i<5; i++)
    {
        p[i] = (char *) calloc(5, sizeof(char));
        printf("Enter string of position %d",i+1);
        scanf("%s", *(p+i));
    }

    for(int i=0;i<5; i++)
    {
        printf("%s", p[i]);
        printf("\n");
    }
    return 0;
}