#include<stdio.h>
#include<stdlib.h>

struct name_without_mid
{
    char first_name[10];
    char last_name[10];

};


struct name_with_mid
{
    char first_name[10];
    char mid_name[10];
    char last_name[10];

};


int main()

{
    int n;
    char temo;
    printf("Enter the number of users to print the data.:  ");
    scanf("%d", &n);


    struct name_with_mid* myarray[n];
    char have_mid_name[n];
    
    for(int i=0; i<n; i++)
    {
        printf("Does this person have a middle name? (y/n)  ");
        scanf(" %c", &have_mid_name[i]);
        
        if(have_mid_name[i] == 'y')
        {
            myarray[i] = (struct name_with_mid *)malloc(sizeof(struct name_with_mid));
            
            printf("For person %d, \n", i+1);
            printf("Enter first name --?  ");
            scanf("%s", (*myarray[i]).first_name);
            
            printf("Enter middle name --?  ");
            scanf("%s", (*myarray[i]).mid_name);
            
            printf("Enter last name --?  ");
            scanf("%s", (*myarray[i]).last_name);
            printf("\n\n");
            
        }
        
        else
        {
            myarray[i] = (struct name_without_mid *)malloc(sizeof(struct name_without_mid));
            
            printf("For person %d, ", i+1);
            
            printf("Enter first name --?  ");
            scanf("%s", (*myarray[i]).first_name);
            
            printf("Enter last name --?  ");
            scanf("%s", (*myarray[i]).last_name);
            
            printf("\n\n");
        }
        
    }
    
    
    printf("The name data of people are .: \n");
    for(int i=0; i<n; i++)
    {
        if(have_mid_name[i] == 'y')
        {
            printf("For person %d:\n", i+1);
            printf("\tFirst name => %s\n", (*myarray[i]).first_name);
            printf("\tMiddle Name => %s\n", (*myarray[i]).mid_name);
            printf("\tLast Name => %s\n", (*myarray[i]).last_name);
            printf("\n\n");
        }
        else
        {
            printf("For person %d:\n", i+1);
            printf("\tFirst name => %s\n", (*myarray[i]).first_name);
            printf("\tLast Name => %s\n", (*myarray[i]).last_name);
            printf("\n\n");
        
        }

    }
    
    
    for(int i=0; i<n; i++)
    {
        free(myarray[i]);
    }
    
    return 0;
    
}





