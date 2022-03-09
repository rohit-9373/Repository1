#include <iostream>
using namespace std;

class base1
{
    protected:
    int i;
    public:
    base1(int x)
    {
        i =x;
        cout<< "constructing base"<<endl; 
    }
    ~base1()
    {
        cout<<"destructing base1\n"<<endl;
    }
};
class base2
{
    protected:
    int k;
    public:
    base2(int x)
    {
        k =x;
        cout<< "constructing base2"<<endl; 
    }
    ~base2()
    {
        cout<<"destructing base2\n"<<endl;
    }
};

class derived:public base1,public base2
{
    protected:
    int j;
    public:
    derived(int x,int y,int z):base1(y),base2(z)
    {
       j=k;
       cout<<"constructor in derived"<<endl;
    } 
     ~derived()
    {
       j=k;
       cout<<"destructor in derived"<<endl;
    } 
    void show()
    {
        cout<<i<<" "<<j<<" "<<k;
    }
    
};
int main() {
    derived ob(3,4,5);
    ob.show();
    

    return 0;
}