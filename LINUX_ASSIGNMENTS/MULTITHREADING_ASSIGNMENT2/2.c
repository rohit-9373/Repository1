#include<stdio.h>
#include<pthread.h>
#include<string.h>

struct my_informations_
{
    int mobile_no;
    char data[100];
};

void *thread_function(void *threadob)
{
  
  struct  my_informations_ *t1;
  t1 = (struct  my_informations_ *) threadob;
  printf("\n Mobile no : %d\n Data : %s\n",t1->mobile_no,t1->data);
}


int  main()
{
    pthread_t thread;
    int rc;
    struct  my_informations_ tid;
    tid.mobile_no = 1234567891;
    strcpy(tid.data,"hello,i am rohit chavda\n");
    pthread_create(&thread,NULL,thread_function,(void *)&tid);
    pthread_exit(NULL);
}