
#include<stdio.h>
int main()
{
	char *name[]={"ravi","krish","sri","hello"};
	printf("%s ",*(name+1));
	printf("%s ",*name+2);
	return 0;
}
