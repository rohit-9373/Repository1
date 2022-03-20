#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ofstream outFile ;
    outFile.open("data.txt");
    outFile<< "this is my file";
    long pos = outFile.tellp();
    outFile.seekp(pos+6);
    outFile<<"Again my file";
    outFile.close();
    cout<<"Done"; 
}