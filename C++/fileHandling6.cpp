#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file,fout;
    char ch;
    file.open("demo.txt");
    fout.open("demo1.txt");
    int count =0;
    char word[30];
    while(!file.eof())
    {
        file.get(ch);
        fout<<ch;
    }
        
    cout<<"copied!!!:"<<endl;
    
    file.close();
    
}