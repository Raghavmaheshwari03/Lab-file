#include <stdio.h>
int main()
{
    printf("-----NAME:Raghav maheshwari ----\n-----SID:231601101----\n");

    int n,sum=0;
    printf("Enter digit:");
    scanf("%d", &n);
    while(n!=0)
    {
        sum += n % 10;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}