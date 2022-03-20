#include<fstream>
#include<iostream>
using namespace std;

int main()
{
   fstream fp;
   char bufx[100];
   int pos;
   fp.open("data.txt",ios::out|ios::ate);
   cout<<"writing to a file"<<endl;
   fp<<"Line two"<<endl;
   pos = fp.tellp();
   cout<<"current position :"<<pos<<endl;
   fp.seekp(-7,ios::cur);
   fp<<endl<<"random data";
   fp.seekp(7,ios::beg);
}