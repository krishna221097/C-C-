#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h> //if you are using constant O_RDONLY- read only
int main(int argc,char* argv[])
{
	//ensure that user enters two cmdd line parameters
	if(argc!=3)
	{
		printf("Invalid number of arguments.\nEnter source file name and then destination file name.");
		exit(1);
	}
	char buff[1024];
	//create the target file descriptor in read write mode
	int destfd=open(argv[2],O_CREAT|O_RDWD|O_TRUNC,00600);
	//file opened in write mode
	if(destfd<0)
	{
		perror("open dest");
		exit(1);
	}
	//open the source file descriptor in read mode
	int srcfd=open(argv[1],O_RDONLY);
	if(srcfd<0)
	{
		peror("open src");
		exit(1);
	}
	int n;
	//read the source file and write in the destination file
	for(;;)
	{
		n=read(srcfd,buff,1024);
		if(n<=0)
		{
			close(srcfd);
			close(destfd);
			return 0;
		}
		write(destfd,buff,n);
	}
	return 0;
}
