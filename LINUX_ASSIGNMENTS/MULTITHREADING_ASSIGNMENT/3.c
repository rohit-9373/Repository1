#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int main()
{
	size_t stack_size;
	pthread_attr_t attr;
	pthread_attr_getstacksize(&attr, &stack_size);
	printf("default stack size =%d\n", stack_size);
	pthread_attr_setstacksize(&attr, 100000000);
	pthread_attr_getstacksize(&attr, &stack_size);
	printf("stack size after changing = %d\n", stack_size);
	return 0;
}
