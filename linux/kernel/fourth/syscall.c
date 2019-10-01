#include <stdio.h>

main () {
	// Simple_add System Call Test
	int add_result;
	int c;
	add_result = syscall(319, 4, 5, &c);
	printf("%d",add_result);
	printf("Simple_add stores 4+5, which is %d in variable c \n", c);
}
