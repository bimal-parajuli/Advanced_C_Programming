#include<stdio.h>
#include<string.h>

struct details
{
    char name[50];
    char id[10];
    char phone[15];
};

int main()
{
    
    int n=3, total_mem, memory_of_phone;
    struct details myarray[n];
    float percentage;
    
    for(int i=0; i<n; i++)
    {
        printf("\n\nFor person %d ::\n", i+1);
        
        printf("Enter the name :  ");
        scanf(" %s", myarray[i].name);
        
        printf("Enter the ID :  ");
        scanf(" %s", myarray[i].id);
        
        printf("Enter the phone no :  ");
        scanf("%s", myarray[i].phone);
    }
    
    printf("The amount and percentage of memory used by phone compared to string for each record are:\n\n");
    
    for(int i=0; i<n; i++)
    {

        memory_of_phone = sizeof(char)*(strlen((*(myarray + i)).phone));
        total_mem = memory_of_phone + (sizeof(char)*(strlen((*(myarray + i)).name)) + (sizeof(char)*(strlen((*(myarray + i)).id))));               
        percentage = (memory_of_phone * 100.0)/(total_mem * 1.0);
        
        printf("For record %d:\n", i+1);
        printf("Memory occupied by phone Number is %d bytes.\n", memory_of_phone);
        printf("Total memory of record %d is %d\n", i+1, total_mem);
        printf("Percentage of memory occupied by phone wrt total space in record %d is %f\n\n\n\n", i+1, percentage);
        
    }
    
    
    return 0;
}


