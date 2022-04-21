/**
* @author Anmol Guragain
* @since 11 March 2022
* Write a C program to read regno., name and marks of n number of students and store them in a text file.
*/

#include <stdio.h>
#include<stdlib.h>


struct student{  //defining the structure to get student details
    char name[50];
    int regno, marks;
    
}s;

//strat of the main program
int main() {
	
	int k,n;
	printf(" How many number of students are there ?? \n"); //asking question to store the number of student
	scanf("%d",&n); //storing the value
	FILE *fptr;
	fptr=(fopen("student.txt","a")); //opening the file
	if(fptr==NULL) {
		printf("Error!"); //condition if there is no file
		exit(1);
	}
	for (k=0;k<n;++k) {  //asking user for the information

		printf("Record of student%d\n Enter name of Student : ",k+1);
		scanf("%s", &s.name);
        printf("Enter the registration number of Student: ");
		scanf("%d",&s.regno);
		printf("Enter the marks of Student : ");
		scanf("%d",&s.marks);
		fprintf(fptr,"\nName: %s \nRegistration Number=%d \nMarks=%d \n",s.name,s.regno,s.marks);
	}
	fclose(fptr);
	return 0;
}