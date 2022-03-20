#include<iostream>
using namespace std;
template <class T,class U>
void mul(T n1,U n2)
{
   cout<<"Result:"<<n1*n2<<endl;
}

int main()
{
    int A=10,B=20;
    double a = 1.2,b=2.5;
    mul(A,a);
    mul(B,b);
}