#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("linux4.txt",ios::in);

    if(!file)
    {
        cout<<"file cannot open"<<endl;
    }
}