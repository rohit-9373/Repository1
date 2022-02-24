#include <iostream>
using namespace std;

class space{
    int x,y,z;
    public:
        space()
        {
          x=y=z=0; 
        }
        space(int a,int b,int c)
        {
           x =  a;
           y = b;
           z = c;
        }
        void disp()
        {
            cout<<"x:"<<x<<endl<<"y:"<<y<<endl<<"z:"<<z<<endl;
        }
        void operator -();
};
void space:: operator -()
{
    x = -x;
    y = -y;
    z = -z;
}
int main() {
    
    space s1(1,2,3);
    s1.disp();
    -s1;
    s1.disp();
    return 0;
}
