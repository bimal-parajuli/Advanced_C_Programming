#include<stdio.h>
//ternary operator and nested ternary operator.
int main()
{
    int x;
    scanf("%d", &x);
    (x==1)? printf("one"):  ((x==2)?printf("two"):  ((x==3)?printf("three"):  ((x==4)?printf("four"):  printf("not 1-4")  )  )  );
    return 0;
}
