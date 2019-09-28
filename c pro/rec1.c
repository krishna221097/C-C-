#include<stdio.h>
void A(int n)
{
	if(n>0)
	{	
		A(n-1);
		
		printf("%d\t",n);
		A(n-1);
		
	}
}
int main()
{
	int n;
	printf("Enter value of n : ");
	scanf("%d",&n);
	A(n);
	printf("\n");
	return 0;
}		
