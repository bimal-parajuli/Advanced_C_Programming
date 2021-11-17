#include<stdio.h>

int main()
{
    int x, first_dig, second_dig;
    printf("Enter a number (0 to 675):");
    scanf("%d", &x);
    printf("\n\nTne equivalent of %d is: ", x);
    
    second_dig = x % 26;
    second_dig = second_dig + 'a';
    
    x = x / 26;
    
    first_dig = x ;
    first_dig = first_dig  + 'a';
    
    printf("%c%c", first_dig, second_dig);
    
    return 0;
}