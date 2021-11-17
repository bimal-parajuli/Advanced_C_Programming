#include<stdio.h>


#define fun1() {printf("checking nested\n");}
#define fun2() {printf("checking it again.\n");}

#define funnnest() {fun1();}

#define funcnest fun1(); fun2(); 

int main()
{
    
    printf("main\n");
    funnnest();

    funcnest;


    return 0;
}