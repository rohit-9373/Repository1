#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    string str,str2;
    file.open("demo.txt");

    if(!file)
    {
        cout<<"file cannot open"<<endl;
    }
    else
    {
        for(int i=0;i<2;i++)
        {
            file>>str>>str2;
            cout<<str<<"\t"<<str2<<endl;
            
        }
    }
    
    file.close();
    
}