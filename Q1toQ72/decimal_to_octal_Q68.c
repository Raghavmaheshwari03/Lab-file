#include <stdio.h>
int main()
{
    printf("-----NAME:Raghav maheshwari ----\n-----SID:231601101----\n");
    int i, rem, place = 1, decimal, tempDecimal, octal = 0;
    printf("Enter any decimal number: ");
    scanf("%d", &decimal);
    tempDecimal = decimal;
    while(tempDecimal > 0)
    {
        rem = tempDecimal % 8;
        octal = (rem * place) + octal;
        tempDecimal /= 8;
        place *= 10;
    }
    printf("\nDecimal number = %d\n", decimal);
    printf("Octal number = %d", octal);
    return 0;
}
