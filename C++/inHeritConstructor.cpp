#include <iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout<<"base default constructor"<<endl;
    }
   
   
};

class derived : public base
{
    int y;
    public:
    derived()
    {
        cout<<"derived default constructor"<<endl;
    }
    derived(int i)
    {
        cout<<"derived parameterized constructor"<<endl;
    }
   
   
};



int main() {
    base b;
    derived d1;
    derived d2(10);
    return 0;
}
