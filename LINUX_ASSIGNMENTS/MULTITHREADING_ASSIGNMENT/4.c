#include<pthread.h>
#include<stdio.h>

pthread_t tid;
pthread_t thread_ID;
int pid;

void* thread_function(void *arg)
{
  
    printf("\n!!!new thread is executing..!!!\n");
    
    
    return NULL;
}


int main(void)
{
    int ret = pthread_create(&tid,NULL,thread_function,NULL);
    thread_ID = pthread_self();
    pid = getpid();
    printf("New thread is created succesfully\n");
    printf("\n Thread ID is : %u",thread_ID);
    printf("\n process pid  : %d",pid);
    pthread_join(tid,NULL);
     
   
    
    return 0;
}