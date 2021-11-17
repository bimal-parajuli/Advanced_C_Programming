#include <stdio.h>
#include <stdlib.h>

typedef struct addresses
{
    int house_no : 7;
    char city[50];
} ad;

struct details
{
    char name[30];
    int roll;
    ad address;
};

void printdetails(struct details[], int);
int main()
{
    int n;
    printf("Enter the number of students to add details: ");
    scanf("%d", &n);

    struct details s1[n];

    for (int i = 0; i < n; i++)
    {
        printf("For person %d\n", i + 1);
        printf("Name--?  ");
        scanf("%s", &s1[i].name);

        printf("Roll number--?  ");
        scanf("%d", &s1[i].roll);

        printf("House Number--?  ");
        scanf("%d", s1[i].address.house_no);

        printf("City--?  ");
        scanf("%s", &s1[i].address.city);

        printf("\n\n");
    }

    void printdetails(s1, n);
    return 0;
}

void printdetails(struct details array1[], int n)
{
    printf("Details .:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        printf("%s,   ", array1[i].name);
        printf("Roll:%d,  ", array1[i].roll);
        printf("House No:%d,  ", array1[i].address.house_no);
        printf("%s\n", array1[i].address.city);
    }
}
