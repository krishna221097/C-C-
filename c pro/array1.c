#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	printf("values:");
	for(int i=0;i<5;i++)
	{
	a[i]=a[i]*a[i];
	printf("%d\t",a[i]);
	}
return 0;
}
