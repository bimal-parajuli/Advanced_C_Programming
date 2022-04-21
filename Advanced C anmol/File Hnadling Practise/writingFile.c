#include <stdio.h>  
int main(){  
   struct emp{
      char name[40];
      int marks;
   };struct emp e;

   char another='Y';
   FILE *fp;  
   fp = fopen("file.txt", "rb");//opening file 
   while(fread(&e ,sizeof(e),1,fp)==1){
      printf("%s %d",e.name , e.marks);
   } 
   // while(another == 'Y'){
   //    printf("Enter name age salary: ");
   //    scanf("%s %d", e.name, &e.marks);
   //    fwrite(&e, sizeof(e),1,fp);
   //    printf("Add next Y N");
   //    fflush(stdin);
   //    another = getche();

   // }
   
   //writing data into file  
   fclose(fp);//closing file
   return 0;  
}  