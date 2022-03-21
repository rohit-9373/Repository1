#include <stdio.h>
#include <unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<fcntl.h>

int main()
{

pid_t childPid;  
childPid = fork();

if(childPid == 0)  
{   
        int fd1;    
        char read_buf[50];  
        int len=50;
        printf("opening a file...........\n");
        fd1 = open("input.txt",O_RDWR,0777);
        printf("reading a file...........\n");
        read(fd1,read_buf,len);
        lseek(fd1,0,SEEK_SET);
        printf("content of input file is:%s\n",read_buf);
        close(fd1);
        exit(0); 
}

else  
{    
    int returnStatus;    
    waitpid(childPid, &returnStatus, 0); 

    if (returnStatus == 0) 
    {
       printf("The child process Completed successfully!!.");    
    }

}
}