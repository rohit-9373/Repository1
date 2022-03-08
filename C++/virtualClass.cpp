#include <iostream>
using namespace std;

class a
{
    public:
    int i;
   
   
};

class b:virtual public a
{
    public:
    int j;
   
   
};

class c:virtual public a
{
    public:
    int k;
   
   
};

class d:public b,public c
{
    public:
    int sum;
   
   
};


int main() {
    d obj1;
    obj1.i=10;
    obj1.j=20;
    obj1.k=30;
    obj1.sum = obj1.i+obj1.j+obj1.k;
    cout<<obj1.sum;
    return 0;
}
