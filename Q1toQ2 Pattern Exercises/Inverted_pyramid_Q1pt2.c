#include <stdio.h> 
int main() 
{
    printf("-----NAME:Raghav maheshwari ----\n-----SID:231601101----\n");

    int i,j,k,n = 5;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < 2 * (n - i) - 1; k++)
        { 
            printf("* ");
        }
        printf("\n"); 
    }
    return 0; 
}