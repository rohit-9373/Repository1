#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	      int fd1;  
        int len = 50;  
        char write_buf[50] = "linux program 4";
        char buf[50];  
        fd1 = open("linux4.txt",O_CREAT|O_RDWR,0777);
        if(fd1>0)
        {
          printf("operations for file creation and opening is succesfull\n");
        }
        write(fd1,write_buf,50);
        printf("writing into file is succesfull\n");
        lseek(fd1,0,SEEK_SET);
        read(fd1,buf,len);
        printf("content:%s\n",buf);
        close(fd1);
return 0;

}
