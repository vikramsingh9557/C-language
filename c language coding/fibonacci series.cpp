#include<stdio.h>
int fibonacci(int i);
main()
{
	int i;
	printf("fibonacci series is : ");
	for(i=0;i<10;i++)
	{
		printf("%d ",fibonacci(i));
	}
}
int fibonacci(int i)
{
	if (i==0)
	{
		return 0;
	}
	if (i==1)
	{
		return 1;
	}
	return fibonacci(i-1)+fibonacci(i-2);
}

