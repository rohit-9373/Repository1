#include <iostream>
using namespace std;


template <class T>

class Addition{
    public:
    T add(T n1,T n2)
    {
        T res;
        res = n1+n2;
        return res;
    }
};

int main()
{
	Addition<int> ob1;
    Addition<long> ob2;
    int  a=10,b=20,c;
    long A=11,B=22,C;
    c = ob1.add(a,b);
    cout<<"sum:"<<c<<endl;
    C = ob2.add(A,B);
    cout<<"sum:"<<C<<endl;
	return 0;
}
