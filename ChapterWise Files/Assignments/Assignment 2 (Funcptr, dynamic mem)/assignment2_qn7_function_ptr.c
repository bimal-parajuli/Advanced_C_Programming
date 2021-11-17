#include<stdio.h>
#include<string.h>

void addit(int a, int b)
{
    printf("The sum of additions is %d", a+b);
}

void multi(int a, int b)
{
    
    printf("The product of %d and %d is %d",a, b, a*b);
}

void divi(int a, int b)
{
    
    printf("The quotient of %d / %d is %d",a, b, a/b);
}

void modul(int a, int b)
{
    
    printf("The remainder of %d / %d is %d",a, b, a%b);
}


int main()
{
    
    char response[7];
    int a, b;
    
    printf("Enter the desired operation (multi, addit, modul, divi) ::  ");
    scanf("%s", response);
    
    printf("\n\nThe response is %s", response);
    
    printf("\n\nEnter the numbers ::  ");
    
    scanf(" %d %d", &a, &b);
    
    
    // printf("The numbers are :: %d and %d", a, b);
    void (*funcptr)(int, int);
    
    if(response[0] == 'm' && response[1] == 'o' )
    {
        funcptr = &modul;
        
    }
    else if(response[0] == 'm' && response[1] == 'u')
    {
        funcptr = &multi;
        
    }
    else if(response[0] == 'a')
    {
        funcptr = &addit;
        
    }
    else if(response[0] == 'd')
    {
        funcptr = &divi;
    
    }
    
    
    funcptr(a, b);
    
    
    return 0;
}








