#include<stdio.h>
int add(int a,int b);

int main()
{ int a,b;
printf(" enter the value of a and b\n");
scanf("%d%d",&a,&b);
int c=add(a,b);
printf("c addition is : %d \n",c);

}

int add(int x, int y)
{
	int z;
	z=x+y;
	return z;
}
