#include <stdio.h>
int main()
{
    printf("-----NAME:Raghav maheshwari ----\n-----SID:231601101----\n");
    int year;
    printf("Enter year : ");
    scanf("%d", &year);
    if(year % 4 == 0)
    {
        printf("its a leap year");
    }
    else
    {
        printf("its not a leap year");
    }
    return 0;
}