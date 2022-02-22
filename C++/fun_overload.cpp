#include <iostream>
using namespace std;

class arg{
    public:
        int add(int a,int b)
        {
            return a+b;
        }
        int add(int a,float b)
        {
            return a+b;
        }
        int add(int a,int b,int c)
        {
            return a+b+c;
        }
        float add(double a,double b,double c)
        {
            return a+b+c;
        }
};
int main() {
    
    arg ob1;
    cout<<ob1.add(1,1)<<endl<<ob1.add(1,2,2)<<endl<<ob1.add(1.1,2.2,3.3);
    return 0;
}
