#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    
    file.open("demo.txt");
    int count =0;
    char word[30];
    if(!file)
    {
        cout<<"file cannot open"<<endl;
    }
    else
    {
        while(!file.eof())
        {
            file>>word;
            count++;
            
            
        }
    }
    cout<<"total words:"<<count<<endl;
    
    file.close();
    
}