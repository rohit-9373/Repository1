#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("We are in 4_new.c\n");
    printf("PID of 4_new.c = %d\n", getpid());
    return 0;
}