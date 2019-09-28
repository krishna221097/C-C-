#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void *myThreadFun(void *vargp)
{
	sleep(10);
	printf("Printing Threads\n");
	return NULL;
}
int g=0;

int main()
{
	pthread_t thread_id;
	printf("Before Thread\n");
	pthread_create(&thread_id,NULL,myThreadFun,NULL);
	pthread_join(thread_id,NULL);
	printf("After Thread\n");
	exit(0);
}
