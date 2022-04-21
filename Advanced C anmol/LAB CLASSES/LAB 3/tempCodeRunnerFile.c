#include <stdio.h>

int main()
{
    int m, n;

    FILE *file = fopen("demofile.txt", "r");

    char line[256];

    int i = 0;
    printf("Enter the strating line of file i,e M: \n ");
    scanf("%s", &m);
    printf("Enter the ending line of file i,e N: \n ");
    scanf("%s", &n);

//     while (fgets(line, sizeof(line), file))
//     {
// 
//         i++;
//         if (i >= m && i < n )
//         {
//             printf("%s", line);
//         }
//         else if (i >= n)
//         {
//             break;
//         }
//     }

    for(int i=0; i<n; i++)
    {
        fgets(line, sizeof(line), file);
        if(i>=m)
        {
            printf("%s", line);
        }
    }

    fclose(file);

    return 0;
}