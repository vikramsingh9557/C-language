#include<stdio.h>
int sum(int n);
int main()
{
	int num;
	printf("enter any positive number\n");
	scanf("%d",&num);
	printf("addition is = %d ",sum(num));
	return 0;
}

int sum(int n)
{
	if (n>0)  // logic
	return n+sum(n-1);
	else
	return n;
}
