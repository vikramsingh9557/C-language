#include<stdio.h>
int main()
{
	int i,n;
	printf("enter any integer : ");
	scanf("%d",&n);
	printf("\nodd numbers :  ");
	for(i=1;i<=n;i++)
	{
		if (i%2==1)
		{
			printf(" %d",i);
		}
		else
		continue;
	}
	printf("\neven numbers:  ");
	for(i=1;i<=n;i++)
	{
		if (i%2==0)
		{
			printf(" %d",i);
		}
		else
		continue;
	}
}
