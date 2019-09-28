#include<stdio.h>
void input1(int a[10][10],int r1,int c1)
{
	int i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	return;
}
void input2(int b[10][10],int r2,int c2)
{
	int i,j;
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	return;
}

void mul(int a[10][10],int b[10][10],int c[10][10],int r1,int r2,int c1,int c2)
{
	int i,j,k;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<c2;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	return;
}

int main()
{
	int r1,c1,r2,c2;
	int i,j;
	printf("Enter the row of A matrix");
	scanf("%d",&r1);
	printf("Enter the row of A matrix");
	scanf("%d",&c1);

	printf("Enter the row of A matrix");
	scanf("%d",&r2);
	printf("Enter the row of A matrix");
	scanf("%d",&c2);
		int a[10][10],b[10][10],c[10][10];
	if(c1==r2)
	{

		printf("Matrix multiplication is possible\n");
	
		printf("Enter values of A matrix\n");
		input1(a,r1,c1);
		printf("Enter values of B matrix\n");
		input2(b,r2,c2);
	
		printf("Multiplication of 2 matrix:\n");
		mul(a,b,c,r1,r2,c1,c2);

		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}	
	else
	{
		printf("Matrix multiplication is not possible");
	}
	return 0;
}


