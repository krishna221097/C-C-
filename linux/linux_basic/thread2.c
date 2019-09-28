#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<errno.h>
void* f1(void *);
void* f2(void *);
int main()
{
	pthread_t tid1,tid2;
	//create two child threads and wait for their termination
	pthread_create(&tid1,NULL,f1,NULL);
	pthread_create(&tid2,NULL,f2,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	printf("\nBye Bye from main thread\n");
	return 0;
}
void* f1(void* arg)
{
	
	for(int i=0;i<1000;i++)
	{
		fprintf(stderr,"%c",'X');
		//fflush(stdout);
		//sleep(1);
		
	}
	pthread_exit(NULL);
}
void* f2(void*arg)
{
	
	for(int i=0;i<800;i++)
	{
		fprintf(stderr,"%c",'O');
		//fflush(stdout);
		//sleep(1);
		
	}
	pthread_exit(NULL);
	//return NULL;
}
