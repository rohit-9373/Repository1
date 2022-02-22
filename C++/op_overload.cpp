#include <iostream>
using namespace std;

class Comp{
    public:
        int real;
        int img;
        
        Comp()
        {
            real=0;
            img=0;
        }
        Comp(int a,int b)
        {
           real = a;
           img = b;
        }
        
        Comp operator +(Comp ob)
        {
            Comp temp;
            temp.real = real + ob.real;
            temp.img = img + ob.img;
            return temp;
        }
};
int main() {
    Comp a(1,1);
    Comp b(2,2);
    Comp c;
    c = a.operator+(b);
    cout<<c.real<<endl<<c.img;

    return 0;
}
