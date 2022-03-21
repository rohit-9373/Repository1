#include <stdio.h>
#include <unistd.h>

void main(){
  int proc_pid ;
  int pid ;
  proc_pid = fork();
  if(proc_pid == 0){
    printf("Child Process 2\n................\npid :%d\nppid:%d\n",getpid(),getppid());
  }
  if(proc_pid > 0){
    pid = fork();
    if(pid > 0){
      printf("\nParent Process:\npid:%d\nppid :%d\n",getpid(),getppid());
    }
    else if(pid == 0){
      printf("\nChild Process 1\n...............\npid :%d\nppid:%d\n",getpid(),getppid());
    }
  }
}