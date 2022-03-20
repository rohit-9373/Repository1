#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    
     fstream file;
     int count=0;
     char file_content[50];

     file.open("the_count.txt");

     while(file)
     {
      file>>file_content;
      if(strcmp(file_content,"the")==0)
      {
         count++;
      }
      
     }

     cout<<"total number of word 'The' is:"<<count<<endl;
     file.close(); 

     return 0;

}