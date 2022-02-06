#include<stdio.h>  
int main()
{      
int i,j;  

int a[3][3];

int m=1;

for(i=0;i<3;i++) 
{
	for(j=0;j<3;j++)
	{
		a[i][j]=m;
		m++;
	}
}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

     return 0;
 
}    
