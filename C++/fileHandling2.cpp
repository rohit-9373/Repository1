#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    string str;
    file.open("demo.txt");

    if(!file)
    {
        cout<<"file cannot open"<<endl;
    }
    else
    {
        while(!file.eof())
        {
            file>>str;
            cout<<str<<" ";
        }
    }
}