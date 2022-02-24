#include <iostream>
using namespace std;

class space{
    int x;
    public:
        space()
        {
          x=0; 
        }
        space(int a)
        {
           x =  a;
         
        }
        void operator ++()
        {
          ++x;
          cout<<"pre increment:"<<x<<endl;
        }
        void operator ++(int)
        {
          x++;
          cout<<"post increment:"<<x<<endl;
        }
};

int main() {
    
    space s1(1);
    ++s1;
    s1++;
    
    return 0;
}
