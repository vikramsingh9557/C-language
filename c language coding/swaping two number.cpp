#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf(" \nbesfore swapping the value is: %d %d",a,b);
	temp=a;
	a=b;
	b=temp;
	
	printf("\nafter swaping the value is: %d %d",a,b);
	
	
}
