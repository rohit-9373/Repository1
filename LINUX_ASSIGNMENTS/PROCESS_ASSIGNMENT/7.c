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
        printf("starting execution of child....\n\n");
        execl("/bin/ls","-lh",0);
}

else 
{    
    int returnStatus;    
    waitpid(childPid, &returnStatus, 0);  

    if (returnStatus == 0)  
    {
       printf("\nThe child process Completed successfully!!.");    
    }

}
}