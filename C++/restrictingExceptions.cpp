#include<iostream>
using namespace std;

void demo()
{
    int a=3;
    if(a==1)
    {
        throw a;
    }
    else if(a==2)
    {
        throw 'A';
    }
    else if(a==3)
    {
        throw 4.5;
    }
}

int main()
{
    try
    {
      demo();
    }
    catch(double n)
    {
       cout<<"exception caught"<<endl;
    }

    cout<<"end of program"<<endl;
    
}