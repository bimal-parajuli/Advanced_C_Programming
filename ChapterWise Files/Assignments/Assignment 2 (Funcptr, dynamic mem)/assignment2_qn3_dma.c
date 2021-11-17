#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    int n=3, len, counter;
    
    int *lenarray = calloc(n,sizeof(int));                    //array containing length of each weekdayentry.        
    float **floatpointers = calloc(n,sizeof(float *));        //array pointing to the array of float values.         
    
    char **day_array = malloc(n*10*sizeof(char));            //weekday entries;                                
    
    for(int i=0; i<n; i++)
    {
        
        printf("\n\nEnter a Weekday :: ");
        scanf("%s",day_array[i]);
        counter=0;

        len = strlen(day_array[i]);
        lenarray[i] = len;

        float *myarray = (float *)calloc(n, sizeof(float));
        floatpointers[i] = myarray;

        printf("Enter %d float numbers:: \n", len);

        for(int j=0; j<len; j++)
        {
            scanf("%f", &myarray[j]);
        }
    
    }
    
    for(int i=0; i<n; i++)
    {
        printf("Day Entered: %s\n", day_array[i]);
        
        printf("Float Values: \n");
        for(int j=0; j<lenarray[i]; j++)
        {
            printf("%f\n", *(*(floatpointers+i)+j));
        }
        
    }
    
    
    
    free(lenarray);
    free(floatpointers);
    free(day_array);
    
    return 0;

}    
    
    

