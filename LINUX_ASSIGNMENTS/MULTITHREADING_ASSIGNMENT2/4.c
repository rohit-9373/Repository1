#include<stdio.h>
#include<pthread.h>

void *thread_function(void  *i)
{
   printf("\n I am in %d thread\n",(int *)i);  
  
}

 main()
 {
     pthread_t tid;
     struct sched_param param;
     int priority,policy ,ret;
     ret = pthread_getschedparam(pthread_self(),&policy,&param);
     printf("\nMain Thread\n Policy : %d \t priority : %d\n",policy,param.sched_priority);
     policy = SCHED_FIFO;
     param.sched_priority = 5;
     ret = pthread_setschedparam(pthread_self(),&policy,&param);
     ret = pthread_setschedparam(pthread_self(),&policy,&param);
     pthread_create(&tid,NULL,thread_function,NULL);
     pthread_join(tid,NULL);
     printf("\nMain Thread\n Policy : %d \t priority : %d\n",policy,param.sched_priority);
     
 }