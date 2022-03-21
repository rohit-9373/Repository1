#include <stdio.h>
#include <unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

void callback1(void)
{
    printf("callback 1 function call\n");
}
void callback2(void)
{
    printf("callback 2 function call\n");
}
void callback3(void)
{
    printf("callback 3 function call\n");
}

int main()
{
    printf("registering callback1\n");
    atexit(callback1);
    printf("registering callback2\n");
    atexit(callback2);
    printf("registering callback3\n");
    atexit(callback3);
}