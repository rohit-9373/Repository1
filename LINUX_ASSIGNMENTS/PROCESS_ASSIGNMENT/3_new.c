#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("We are in 3_new.c\n");
    printf("PID of 3_new.c = %d\n", getpid());
    execlp("pstree","pstree",NULL);
    return 0;
}