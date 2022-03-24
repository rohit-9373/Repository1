#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>


int shared_Gloabal_Variabel = 2;

void *thread_inc(void *arg)
{
    shared_Gloabal_Variabel++;
    printf("After increment in global variable =%d\n", shared_Gloabal_Variabel);
    printf("\n\n");
}

void *thread_dec(void *arg)
{
    shared_Gloabal_Variabel--;
    printf("After decrement in global variable=%d\n", shared_Gloabal_Variabel);
    printf("\n\n");
}

int main()
{
    pthread_t t1,t2;
    pthread_create(&t1,NULL,thread_inc,NULL);
    pthread_create(&t2,NULL,thread_dec,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    printf("Shared variable=%d\n", shared_Gloabal_Variabel);
    printf("....................");
}