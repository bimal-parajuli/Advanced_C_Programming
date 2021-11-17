#include <stdio.h>
#include <stdlib.h>

union choice
{
    float percentage;
    char division[10];
};

struct details
{
    char name[15];
    char edu_qual[15];
    union choice option;
};

int main()
{
    int n = 2;
    char choice;

    printf("Enter the number of users whose data is to be collected ::  ");
    scanf("%d", &n);

    struct details *myarray = (struct details *)calloc(sizeof(struct details), n);

    for (int i = 0; i < n; i++)
    {
        printf("\n\nFor person %d\n", i + 1);
        printf("Enter the name of the person: ");
        scanf(" %s", myarray[i].name);

        printf("Enter the educational qualifications of the person:  ");
        scanf(" %s", myarray[i].edu_qual);

        printf("Whether to enter percentage or division (p/d)?? ");
        scanf(" %c", &choice);

        if (choice == 'p' || choice == 'P')
        {
            scanf(" %f", &myarray[i].option.percentage);
        }
        else
        {
            scanf(" %s", myarray[i].option.division);
        }
    }

    free(myarray);

    return 0;
}