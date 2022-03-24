#include<stdio.h>
#include<semaphore.h>
#include<sys/types.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>


pthread_mutex_t mutex;

void *thread_function1(void *arg)
{
    pthread_mutex_lock(&mutex);
    printf("thread 1 executing....\n\n");
    pthread_mutex_unlock(&mutex);
}
void *thread_function2(void *arg)
{
    pthread_mutex_lock(&mutex);
    printf("thread 2 executing....\n\n");
    pthread_mutex_unlock(&mutex);
}

int main()
{
   pthread_t t1,t2;
    pthread_mutex_init(&mutex,NULL);
	pthread_create(&t2,NULL,*thread_function2,NULL);
    pthread_create(&t1,NULL,*thread_function1,NULL);
	pthread_join(t2,NULL);
    pthread_join(t1,NULL);
    
  
}


