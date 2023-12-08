#include <stdio.h>
int main()
{
    printf("-----NAME:Raghav maheshwari ----\n-----SID:231601101----\n");

    float base, height;
    float area;
    printf("Enter base and height of the right angle triangle:");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    printf("The area of the right angle triangle is: %.2f\n", area);
    
    return 0;
}