#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main() {

  char sentence[150];
  int no_of_vowel =0;
  int no_of_consonant =0;
  int  no_of_digits =0;
  int no_of_whitespaces =0;

  

  // using fgets to get the full length of the input
  printf("Enter a line of string: ");
  fgets(sentence, sizeof(sentence), stdin);

  // looping through eac and every character in the given string
  for (int i = 0; sentence[i] != '\0'; ++i) {

    // convert the input data to lowercase to provide the uniformity in counting
    sentence[i] = tolower(sentence[i]);

    // check if the character is a vowel
    if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' ||
        sentence[i] == 'o' || sentence[i] == 'u') {

      // increment value of vowels by 1
      ++no_of_vowel;
    }

    // this is the logic to check the consonant for the given file
    else if ((sentence[i] >= 'a' && sentence[i] <= 'z')) {
      ++no_of_consonant;
    }

    // checkinf if it is a digit or a number 
    else if (sentence[i] >= '0' && sentence[i] <= '9') {
      ++no_of_digits;
    }

    /*
    while (str[i] != '\0')
  	{
  		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
		str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')  
		{
  			vowels++;  	
 		}
  		else
    		consonants++;
    	i++;
	}
    */

    //checking the no of whitespaces in the input sentence
    else if (sentence[i] == ' ') {
      ++no_of_whitespaces;
    }
  }
    //printing the output for the program
  printf("The no of Vowels in given sentence was: %d", no_of_vowel);
  printf("\nThe no of Consonants in given sentence was: %d", no_of_consonant);
  printf("\nThe no of Digits in given sentence was: %d", no_of_digits);
  printf("\nThe no of white spaces found were: %d", no_of_whitespaces);

  return 0;
}
