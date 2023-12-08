#include<stdio.h>
int main()
{
	printf("-----NAME:Raghav maheshwari ----\n-----SID:231601101----\n");
	
	int n,p=0;
	printf("Enter No Here:-");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			p+=i;
		}
	}
	printf("\nSum of all Odd No from 1 to %d = %d\n",n,p);
	return 0;
}
