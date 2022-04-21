//write a program to delete successive repeated characters from a string.

#include <stdio.h>
 
int main()
{
 
    char str[100];
    int i,j,num,num1;
 
    /*taking the input*/
    printf("Enter any string: ");
    gets(str);
     
    /*calculating length*/
    for(num=0; str[num]!='\0'; num++);
 
    /*assign 0 to len1 - length of removed characters*/
    num1=0;
 
    /*Removing consecutive repeated characters from string*/
    for(i=0; i<(num-num1);)
    {
        if(str[i]==str[i+1])
        {
            /*shift all characters*/
            for(j=i;j<(num-num1);j++)
                str[j]=str[j+1];
            num1++;
        }
        else
        {
            i++;
        }
    }
 
    printf("String after removing succesive repeated characaters: %s\n",str);
 
    return 0;
}