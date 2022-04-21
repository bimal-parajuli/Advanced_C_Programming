#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void replace(){
    char ch, input[50], output[50];
    FILE *ip , *op;
    ip = fopen("file_search_input.txt", "r");
    op = fopen("file_replace_output.txt", "w+");
     if(ip == NULL){
         puts("Cant open the file");
         exit(0);

    }
    puts("displaying contents of the file");
    while(1){
        ch=getc(ip);
        if(ch == EOF){
            break;
        }
        printf("%c", ch);
    }




}
main(){
    replace();
}
