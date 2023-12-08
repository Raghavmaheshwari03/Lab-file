#include <stdio.h>
int main()
{
    printf("-----NAME:Raghav maheshwari ----\n-----SID:231601101----\n");
    int a, b, c, i, terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    a = 0;
    b = 1;
    c = 0;
    printf("Fibonacci terms: \n");
    for(i=1; i<=terms; i++)
    {
        printf("%d, ", c);

        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}