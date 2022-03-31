#include<stdio.h>
#include<pthread.h>

pthread_once_t once = PTHREAD_ONCE_INIT;

void *init_function()
{
  printf("............................\n");
  printf("\nThis is init function\n");
  printf("............................\n");
}

void *thread_function(void  *i)
{
   printf("\n I am in my thread function : %d\n",(int *)i);  
   pthread_once(&once,(void *)init_function);
   printf("\n exit from my function : %d\n",(int *)i);
}

int  main()
{
    pthread_t thread;
    pthread_create(&thread,NULL,thread_function,(void *)1);
    pthread_exit(NULL);
}