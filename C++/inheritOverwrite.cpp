#include <iostream>
using namespace std;

class abc
{
    public:
   
    void display()
    {
       cout<<"this is parent class"<<endl;
    }
    
};
class xyz: public abc
{
    public:
   
    void display()
    {
       cout<<"this is child class"<<endl;
    }
};
int main() {
    
    xyz ob1;
    ob1.display();
    ob1.abc::display();
    return 0;
}
