#include <stdio.h>
int main()
{
    printf("-----NAME:Raghav maheshwari ----\n-----SID:231601101----\n");
    
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(rows*2 - (2*i-1)); j++)
        {
            if(i==1 || j==1 || j==(rows*2 - (2*i - 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}