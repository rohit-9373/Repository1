#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ofstream  ofile;
    ofile.open("demo1.txt");
    ofile<<"Line one in the document"<<endl;
    ofile<< "Another line"<<endl;
    cout<<"To the terminal"<<endl;
    ofile.close();

}