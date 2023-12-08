#include <stdio.h>
int main()
{
    printf("-----NAME:Raghav maheshwari ----\n-----SID:231601101----\n");
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num > 0)
    {
        printf("Number is POSITIVE");
    }
    if(num < 0)
    {
        printf("Number is NEGATIVE");
    }
    if(num == 0)
    {
        printf("Number is ZERO");
    }
    return 0;
}