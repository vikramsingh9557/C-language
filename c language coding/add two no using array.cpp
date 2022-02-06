#include<stdio.h>
int main()
{
	int a[5]={10,15,20,15,30};
	int b[5]={30,40,50,60,70};
	int c[5];
	int i;
	
	printf("value of A \n");
	for(i=0;i<5;i++)
    {
	printf("%d ",a[i]);
    }
	
	printf("\n\nvalue of B \n");
	for(i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n\nvalue of c \n");
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<5;i++)
	{
  	
	printf("%d ",c[i]);
    }
	return 0;
}


