#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>


int main()
{
    int qid;
    struct msqid_ds buffer;
    qid = msgget(32,IPC_CREAT|0644);
    printf("qid is = %d\n",qid);
    msgctl(qid,IPC_STAT,&buffer);
    printf("Fetching all information of the queue...\n");
    printf("total messages in queue %li\n",buffer.msg_qnum);
    printf("max bytes in queue %li\n",buffer.msg_qbytes);
    printf("removing message queue..");
    printf("Done");
    msgctl(qid,IPC_RMID,NULL); 
}