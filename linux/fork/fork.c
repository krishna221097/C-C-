#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int cpid=fork();
	if(cpid==0)
		printf("Hello i am child\n");
	else
		printf("Hello i am parent\n");
	return 0;
}
