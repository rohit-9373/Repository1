#include<stdio.h>
#include<unistd.h>
#include<string.h>

int p[2];

int parent_append()
{
   
        char s[20];
        printf("\nenter data that you want to read from child...\n");
        scanf("%s",s);
        write(p[1],s,strlen(s)+1);
}

int child_read()
{
 char  buf[20];
        printf("Reading the data from the Parent....\n");
        read(p[0],buf,sizeof(buf));
        printf("Data of the parent process:%s\n",buf);
}
int main()
{
    
    pipe(p);
    int wd= 0;
    
    if(fork())
    {
        parent_append();
        wd = 1;
    }
  while(wd!=0)
  {
     child_read();
     printf("Data reading succesfull..");
     printf("Read end of pipe = %d\t write end of pipe = %d\n",p[0],p[1]);
     break; 
  }

  

 
    
}