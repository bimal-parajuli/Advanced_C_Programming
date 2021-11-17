#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int i, x, length;
    char myarray[17];
    
    
    //getting input from the user.
    scanf(" %s", myarray);               
    
    
    //calculating length of binary string.
    length = strlen(myarray);            
    
    
    //start looping from (length-1)th to 0th item of string.
    x = 0;
    for(i= (length-1); i>=0; i--)        
    {
        if(myarray[i] == '0')            
        {
            // If it's 0, do nothing, add 0.
            x += 0;
        }
        else
        {
            // If it's 1, add its place value in binary.
            x += pow(2, length-i-1);      
        }
    }
    
    
    //Display the output.
    printf("The integer equivalent of %s is %d", myarray, x);  
    
    return 0;
    
}



