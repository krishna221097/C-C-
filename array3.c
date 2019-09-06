#include<stdio.h>
void input1(int a[2][2])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	return ;
}
void input2(int b[2][2])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	return ;
}
void add(int a[2][2],int b[2][2],int c[2][2])
{
	int i,j;
	int c[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	return ;
}

int main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	printf("Enter values of A matrix\n");
	input1(a);
	printf("Enter values of B matrix\n");
	input2(b);
	printf("Sum of 2 matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			add(a,b,c);
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}

