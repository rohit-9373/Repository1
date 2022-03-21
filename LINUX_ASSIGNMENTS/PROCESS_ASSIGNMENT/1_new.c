#include <stdio.h>
#include <unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<fcntl.h>

int main()
{
        int fd1;    
        char read_buf[50];  
        int len=50;
        printf("opening a file...........\n");
        fd1 = open("input.txt",O_RDWR,0777);
        printf("Inherit fd:%d",fd1);
}