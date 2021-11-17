#include<stdio.h>
#include<string.h>
int main()
{
    int n=1, l, length, namearray;
    char *ptr;

    while(n--)
    {
        printf("Enter the length of name...  ");
        scanf("%d", &length);
        ptr = (char*)malloc((length+1)*sizeof(char));
        printf("Enter the name...  ");
        scanf("%d", ptr);
        printf("%c %c %c %c", *(ptr+2),*(ptr+1), *(ptr+2), *(ptr+3));
        printf("\n\nYou entered %s having %d characters.\n\n",ptr, length);

    }
    return 0;
}
