#include <stdio.h>
#include <unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<fcntl.h>

int main()
{
    int ret = execl("1_new","",NULL);
    if(ret == -1)
    {
        printf("ERROR!!!");
    }
}