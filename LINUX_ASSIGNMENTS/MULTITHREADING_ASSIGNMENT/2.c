#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* thread_fun(void* ptr)
{
	printf("thread initialized\n\n");
	printf("......thread cancelled.......");
	pthread_cancel(pthread_self());
   
	return NULL;
}

int main()
{
	
	pthread_t thread;
	pthread_create(&thread, NULL, thread_fun, NULL);
	pthread_join(thread, NULL);

	return 0;
}
