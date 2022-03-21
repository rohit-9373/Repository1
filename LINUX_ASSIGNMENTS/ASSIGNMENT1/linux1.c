#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd1,fd2;    
        char read_buf[50];  
        char read_out_buf[50];
        char write_buf[50];
        int len=50;
        fd1 = open("input.txt",O_RDWR,0777);
        read(fd1,read_buf,len);
        lseek(fd1,0,SEEK_SET);
        printf("content of input file is:%s\n",read_buf);
        fd2 = open("output.txt",O_CREAT|O_RDWR,0777);
        for(int i=0;i<50;i++)
        {
         write_buf[i] = read_buf[i];
        }
        write(fd2,write_buf,50);
        lseek(fd2,0,SEEK_SET);
        read(fd2,read_out_buf,len);
        printf("content of output file is:%s\n",read_out_buf);
        close(fd1);
        close(fd2);
        return 0;

}
