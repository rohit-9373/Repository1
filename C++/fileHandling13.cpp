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
   fp<<"Hello world";
   fp.close();
   cout<<"done writing"<<endl;
   fp.open("data.txt");
   cout<<"Reading the file"<<endl;
   fp.seekg(0);
   while(fp.getline(bufx,100))
   {
       cout<<bufx<<endl;
   }
   pos = fp.tellg();
   cout<<"pointer is at:"<<pos<<endl;
}