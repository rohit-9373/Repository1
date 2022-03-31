#include <stdio.h>
#include<pthread.h>


void* thread_function(void *arg)
{
    printf("pending thread is executing....\n");
    return NULL;
}
int main()
{
    printf(".....................................\n");
    printf("Main function started its execution\n");
    printf(".....................................\n\n");
    pthread_t tid1,tid2;
    pthread_create(&tid1,NULL,thread_function,NULL);
    pthread_create(&tid2,NULL,thread_function,NULL);
    printf("Main function terminated\n");
    printf(".....................................\n\n");
    pthread_exit(NULL);
    return 0;
}