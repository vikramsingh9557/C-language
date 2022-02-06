#include<stdio.h>  
int main()
{      
int i,j;  

int a[3][3];
int b[3][3];
int c[3][3];

int m=0;
int n=9;


for(i=0;i<3;i++) 
{
	for(j=0;j<3;j++)
	{
		a[i][j]=m;
		m++;
	}
}
	printf("value of array A:\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		
	
	for(i=0;i<3;i++) 
{
	for(j=0;j<3;j++)
	{
		b[i][j]=n;
		n++;
	}
}
	printf("\nvalue of array B:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
		printf("\n");
	}
	
	printf("\nvalues of array C\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
}
printf("\n");
}
     return 0;
 
}    
