#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
int g=0;
void *myThread(void *vargp)
{
	sleep(100);
	int *myid=(int*)vargp;
	static int s=0;
	++s;
	++g;
	printf("Thread Id: %d,Static: %d,Global: %d\n",*myid,++s,++g);
}
int main()
{
	int i;
	pthread_t tid;
	for(i=0;i<10;i++)
		pthread_create(&tid,NULL,myThread,(void *)&tid);
	pthread_exit(NULL);
	return 0;
}
