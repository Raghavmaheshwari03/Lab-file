#include<stdio.h>
int main()
{
	printf("-----NAME:Raghav maheshwari ----\n-----SID:231601101----\n");
	int n=100;
	printf("\n:: All Odd Number 1 to 100 ::\n");
	for(int i=1;i<=100;i++)
	{
		if(i%2!=0)
		{
			printf("  %d\n",i);
		}
	}
	return 0;
}