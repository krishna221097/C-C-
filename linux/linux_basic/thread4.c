#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void *f1(void* ard);
int main(int argc,char* argv[])
{
	char* msg[]={"Thread1","Thread2","Thread3","Thread4","Thread5"};
	pthread_t tids[5];
	for(int i=0;i<5;i++)
	{
		pthread_create(&tids[i],NULL,f1,(void*)msg[i]);
		pthread_join(tids[i],NULL);
	}
	printf("main(): Reporting that all child threads have terminated\n");
	exit(0);
}
void *f1(void* arg)
{
	sleep(100);
	printf("I am child %s\n",(char*)arg);
	pthread_exit(NULL);
}
