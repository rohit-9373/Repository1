#include<iostream>
using namespace std;

class sample
{
    int a,b;
    public:
    void input(int a,int b)
    {
        this->a = a+b;
        this->b = a-b;
    }
     int output()
     {
         cout<< "a:"<<a<<endl;
         cout<< "b:"<<b<<endl;
     }
};

int main()
{
    sample ob1;
    ob1.input(5,8);
    ob1.output();
}