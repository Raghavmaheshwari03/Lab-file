#include <stdio.h>
int main()
{
    printf("-----NAME:Raghav maheshwari ----\n-----SID:231601101----\n");
    
    int s, A, V;
    printf("Enter the length of one side of the cube: ");
    scanf("%d", &s);
    A = 6 * s * s;
    V = s * s * s;
    printf("The area of the cube is %d square units\n", A);
    printf("The volume of the cube is %d cubic units\n", V);

    return 0;
}