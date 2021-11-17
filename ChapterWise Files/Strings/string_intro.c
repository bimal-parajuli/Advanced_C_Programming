#include<stdio.h>
#include<string.h>
#include<strings.h>


int main()
{

    int x;
    char myarray[9] ={'b', 'i', 'm', 'a', 'l', 'p', 'a', 'r', 'a'};


    // In this case, pointer is passed to print.
    printf("%c\n", myarray);


    // In this case, the value is passed to print.
    printf("%c\n", *myarray);


    // Finishes quickly, prints an extra D at the end. Don't know why. Maybe some replacement of null characters.
    printf("%s\n", myarray);


    // Takes a long time and a lot of computation to finish But prints nothing. No idea why.
    //printf("%s\n", *myarray);



    //testing some ASCII things.
//    for(int i=200; i<500; i=i+5)
//    {
//        printf("%d - %c    ", i, i);
//        if(i%50==0)
//        {
//            printf("\n");
//        }
//    }



////Strlen() function:
//    char s[] ="bimal is don.";
//    int i = strlen(s);
//    printf("The string is: %s\n", s);
//    printf("The length of the string is: %d\n", i);
//    return 0;


//strcmp() function:
//For some reason its not wotking. Lets have a look at it later.
    char s1[] ="Wassup";
    char s2[] ="Wassup";
    int comp = strcmp(s1, s2);
    printf("Result of comparison using strcmp is: ");


//strcpy() function:

    char s3[]="bimal.";
    char s4[]="parajuli.";
    printf("\n s3 is %s, s4 is %s\n", s3, s4);
    printf("\nAfter strcpy \n");
    strcpy(s3, s4);
    printf("s3= %s, s4 = %s\n", s3, s4);

//strncat function:

}
