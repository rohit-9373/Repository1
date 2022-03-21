#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd1,point=0;  
        int temp = 0;  
        char write_buf[50] = "linux 2";
        char buf[50];
        int len = 50;
        fd1 = open("linux2.txt",O_CREAT|O_RDWR,0777);
        write(fd1,write_buf,50);
        int i = lseek(fd1,0,SEEK_SET);
        read(fd1,buf,len);
        printf("we are at %d",i);
        printf("\n");
        printf("particualr alphabet:%c",buf[i]);
        printf("\n");
        printf("lets reset it\n");
        printf("enter your pointer:");
        scanf("%d",&point);
        int v = lseek(fd1,point,SEEK_SET);
        printf("we are at %d",v);
        printf("particualr alphabet:%c",buf[v]);
        printf("\n");
        printf("Reset with 0\n");
        int j = lseek(fd1,0,SEEK_SET);
        printf("we are at %d",i);
        printf("\n");
        printf("particualr alphabet:%c",buf[j]);
        printf("\n");
        int e = lseek(fd1,-1,SEEK_END);
        printf("we are at %d\n",e);
        printf("\n");
        printf("eof");
        printf("\n");
        close(fd1);
return 0;

}
