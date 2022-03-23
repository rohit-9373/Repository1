#include<iostream>
using namespace std;

template<class T1>

void sum(T1 a,T1 b,T1 c)
{
    cout<<"sum:"<<a+b+c<<endl;
}
template<class T1,class T2>
void sum(T1 a,T2 b,T1 c)
{
    cout<<"sum:"<<a+b+c<<endl;
}

int main()
{
    int a,b;
    float x,y,z;
    cout<<"Enter two integer"<<endl;
    cin>>a>>b;
    cout<<"Enter three double"<<endl;
    cin>>x>>y>>z;
    sum(x,y,z);
    sum(a,x,b);
}