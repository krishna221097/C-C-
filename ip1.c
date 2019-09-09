/*#include<stdio.h>
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
		b[0]=atoi(b[0]);
		b[1]=atoi(b[1]);
		b[2]=atoi(b[2]);
		b[3]=atoi(b[3]);

		if(b[0]==0 || b[1]==0 || b[2]==0 || b[3]==0)
		printf("Dont know IP address");
		else if(b[0]<=127)
		printf("Class A");
		else if(b[0]>=128 && b[0]<=191)
		printf("Class B");
		else if(b[0]>=192 && b[0]<=224)
		printf("Class C");
		else if(b[0]>=224 && b[0]<=239)
		printf("Class D");
		else if(b[0]>=240 && b[0]<=255)
		printf("Class E");
		else if(	
	return 0;
}*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
char c[20];
char *p;
int i,j,k,l;
printf("Enter String: ");
gets(c);
p=strtok(c,".");
i=atoi(p);

p=strtok(NULL,".");
j=atoi(p);

p=strtok(NULL,".");
k=atoi(p);

p=strtok(NULL,".");
l=atoi(p);

if(((i==168)||(i==255))||(l==255)||((i==0)&&(j==0)&&(k==0)&&(l==0))||((i==127)&&(j==0)&&(k==0)&&(l==0))||(i>255)||(j>255)||(i==0)||(k>255)||(l>255))
{
printf("Invalid IP\n");
exit(0);
}
else
{
printf("Valid IP\n");
if((i>=1)&&(i<=127))
printf("Class A\n");
else if((i>=128)&&(i<=191))
printf("Class B\n");
else if((i>=192)&&(i<=223))
printf("Class C\n");
else if((i>=224)&&(i<=239))
printf("Class D\n");
else if((i>=240)&&(i<=255))
printf("Class E\n");
else
printf("Invalid IP\n");
}	

}
			
