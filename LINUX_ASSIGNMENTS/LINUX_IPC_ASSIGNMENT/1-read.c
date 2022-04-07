#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>

int main()
{
    char *rd_data;
    int id;
    id = shmget(48,250,IPC_CREAT|0644);
    if(id<0)
    {
        perror("shget");
    }
    printf("id is = %d\n",id);
    rd_data = shmat(id,0,0);
    printf("Memory Address:%p\n",&rd_data);
    printf("%s\n",rd_data);
}