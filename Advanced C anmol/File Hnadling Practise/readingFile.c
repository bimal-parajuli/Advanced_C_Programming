#include<stdio.h>  
void main( )  
{  
FILE *fp ;    //file pointer
char ch ;   //character name
fp = fopen("demo.txt","r") ;  //open in r is read mode  
while ( 1 )  //while true
{  
ch = fgetc ( fp ) ;  //character is getting character from the file  
if ( ch == EOF )  
break ;  
printf("%c",ch) ;   //print every character now
}  
fclose (fp ) ;  //close the file  
}  