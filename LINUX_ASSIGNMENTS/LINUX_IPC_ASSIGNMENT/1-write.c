#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>

int main()
{
    char *pt;
    int id;
    id = shmget(48,250,IPC_CREAT|0644);
    if(id<0)
    {
        perror("shget");
    }
    printf("id is = %d\n",id);
    pt = shmat(id,0,0);
    printf("enter your data:");
    scanf("%s",pt);
}