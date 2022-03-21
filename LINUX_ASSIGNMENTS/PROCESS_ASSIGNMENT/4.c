#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    printf("PID of this process = %d\n", getpid());
    char *args[] = {NULL};
    execl("./4_new", args);
    return 0;
}