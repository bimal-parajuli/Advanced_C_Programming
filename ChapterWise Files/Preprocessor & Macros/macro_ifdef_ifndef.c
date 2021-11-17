#include<stdio.h>

#define j 7


//ifdef => checks whether it is defined.
//ifdef => checks whether it doesn't exist.

//macros are evaluated before the compilation.
//if we use ifdef and the macro is not defined, 
//then, the that part of code inside ifdef block is not placed in program during compile time.

//Thus even if it contains error, like missions semicolon, there won't be a problem during program execution.
//But if the macro is defined and we have misssing semicolon or other error inside ifdef block, it can cause problem during program compilation.

int main()
{

    int i=1;

  #ifdef j    //check and return true if j is defined
  printf("C is defined\n");
  #endif  
    
  #if j<10    //check and return true if j is defined as a number less than 10.
  printf("here j is defined as less than 10\n");
  #else
  printf("Here j is not less than 10.\n");
  #endif



    if(i==1)
    {
        printf("checking");
    }



    return 0;
}