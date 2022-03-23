#include <iostream>
using namespace std;

template <class X> void swapp(X &a,X &b)
{
    X temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Inside template swap. \n";
}

void swapp(int &a, int &b)
{
    int temp;
    temp = a;
    a= b;
    b= temp;
    cout<<"Inside int specialization. \n";
}

int main()
{
 int i=10,j=20;
 double x = 10.1, y = 20.1;
 char a = 'x',b = 'z';
 cout<<"Original i,j:"<<i<<" "<<j<<endl;
 cout<<"Original x,y:"<<x<<" "<<y<<endl;
 cout<<"Original x,y:"<<a<<" "<<b<<endl;
 swapp(i,j);
 swapp(x,y);
 swapp(a,b);
 cout<<"SWapped i,j:"<<i<<" "<<j<<endl;
 cout<<"Swapped x,y:"<<x<<" "<<y<<endl;
 cout<<"Swapped a,b:"<<a<<" "<<b<<endl;
}