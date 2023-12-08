#include <stdio.h>
int main()
{
    printf("-----NAME:Raghav maheshwari ----\n-----SID:231601101----\n");

    int side1, side2, side3;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);

    if(side1==side2 && side2==side3) 
    {
        printf("Equilateral triangle.");
    }
    else if(side1==side2 || side1==side3 || side2==side3) 
    {
        printf("Isosceles triangle.");
    }
    else 
    {
        printf("Scalene triangle.");
    }
    return 0;
}