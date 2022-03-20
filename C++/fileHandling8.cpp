#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    char line[100]; 
    fstream  file;
    file.open("demo1.txt",ios::out|ios::app);
    if(file.fail())
    {
        cout<<"file did not open"<<endl;
    }
    else{
     cout<<"Name"<<endl;
     cin.getline(line,100);
     file<<line<<endl;
     cout<<"Age"<<endl;
     cin.getline(line,100);
     file<<line<<endl;
     cout<<"file updated"<<endl;
    }
    

}