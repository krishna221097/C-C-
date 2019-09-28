#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter a type of square matrix");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter the values of the matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			
			if(i==j || (i+j==n-1))
			{
				printf("%d ",a[i][j]);
			}
		else
		printf(" ");
		}
	printf("\n");
	}
return 0;
}
