#include<stdio.h>
int main()
{
	char a[100];
	char b[10][100]={'\0'};
	int i=0;
	int j=0;
	int k=0;
gets(a);



	while(a[i]!='\0')
	{
		if(a[i]=='.')
		{	
			k++;
			i++;
			j=0;
		}
		if(a[i]!='\0')
		{
			b[k][j++]=a[i++];
		}
	}
	for(i=0;i<=k;i++)
	{
		printf("%s ",b[i]);
	}
		if(b[0]<=127)
		printf("Class A")
		else if(b[0]>=128 && b[0]<=191)
		printf("Class B");
		else if(b[0]>=192 && b[0]<=224)
		printf("Class C");
		else if(b[0]>=224 && b[0]<=239)
		printf("Class B");
		else if(b[0]>=240 && b[0]<=255)
		printf("Class B");	
	return 0;
}
			
