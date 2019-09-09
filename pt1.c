#include<stdio.h>
int main()
{
	int *a;
	char *b;
	float *c;
	
	printf("Size of *a(int): %d",sizeof(*a));
	printf("Size of *b: %d(char)",sizeof(*b));
	printf("Size of *c: %d(float)",sizeof(*c));
	return 0;
}
