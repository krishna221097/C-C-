#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		fprintf(stderr,"Incorrect number of arguments. P1 pass one integer\n");
		return 1;
		//printf("Must enter one argument (an integer)\n");
		//exit(1);
	}
	pid_t cpid;
	int n=atoi(argv[1]);
	int i;
	for(i=1;i<=n;i++)
	{
		fork();
		//if(fork()!=0) //Parent should break
			//break;
	}
		fprintf(stderr,"PID=%ld, PPID=%ld\n",(long)getpid(),(long)getppid());
		while(1);
	//printf("PUCIT\n");
	return 0;
	//exit(0);
}
