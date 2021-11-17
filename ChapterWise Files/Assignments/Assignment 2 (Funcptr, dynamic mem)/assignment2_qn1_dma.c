#include<stdio.h>
#include<stdlib.h>
struct details
{
    char names[50];
    char vaccinated;
    int *vacc_ref;
};


int main()
{
    int n=2;
    struct details *myarray = (struct details *)malloc(n*sizeof(struct details));
    
    printf("Enter the detais for %d users.:\n", n);
    
    for(int i=0; i<n; i++)
    {
        printf("For Person %d:\nEnter name .: ", i+1);
        scanf("%s",myarray[i].names);
        printf("Vaccinated? (y/n)  ");
        scanf("%s", &myarray[i].vaccinated);
        if(myarray[i].vaccinated == 'y')
        {
	myarray[i].vacc_ref = (int*)malloc(sizeof(int));
            printf("Enter vaccination reference number   ");
            scanf("%d", myarray[i].vacc_ref);
        }
    
        printf("\n\n");
    }
    
    
    
    printf("\n\n\nThe details of the people are:-\n\n");
    for(int i=0; i<n; i++)
    {
        printf("Name: %s\n", myarray[i].names);
        if(myarray[i].vaccinated == 'y')
        {
            printf("Vaccinated : Yes\n");
            printf("vaccination Reference Number: %d\n\n", *myarray[i].vacc_ref);
        }
        else 
        {
            printf("Vaccinated : No\n\n");
        }
    }
    
    free(myarray);
    return 0;
}
