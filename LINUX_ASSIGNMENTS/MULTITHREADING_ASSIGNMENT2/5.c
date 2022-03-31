#include <stdio.h>
#include <pthread.h>


static pthread_spinlock_t lock;


int temp_var=5;
void *increment_thread(void *num){
    
    pthread_spin_lock(&lock);
    temp_var++;
    printf("Value of temp variable after increment by 1 is: %d\n",temp_var);
    pthread_spin_unlock(&lock);
    return NULL;
}

void *decrement_thread(void *num){
    
    pthread_spin_lock(&lock);
    temp_var--;
    printf("Value of temp variable after decrement by by 1 is: %d\n",temp_var);
    pthread_spin_unlock(&lock);
    return NULL;
}
int main()
{
    pthread_t thread1,thread2;
    printf("value of temp variable at start = %d\n",temp_var);
    pthread_spin_init(&lock,PTHREAD_PROCESS_PRIVATE);
    pthread_create(&thread1,NULL,increment_thread,(void *)1);
    pthread_create(&thread2,NULL,decrement_thread,(void *)2);
    pthread_exit(NULL);
    return 0;
}