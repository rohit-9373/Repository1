#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd1;  
        char write_buf[4000] = {""};
        fd1 = open("linux5.txt",O_CREAT|O_RDWR,0777);
        write(fd1,write_buf,4000);
        lseek(fd1,0,SEEK_SET);
       
        
return 0;

}
