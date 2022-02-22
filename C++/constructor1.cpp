#include <iostream>
using namespace std;

class Distance{
    public:
        int feet;
        int inch;
        Distance(int a,int b)
        {
            feet = a;
            inch = b;
        }
};
int main() {
    
  Distance obj1(5,10);
  cout<<obj1.feet<<endl<<obj1.inch;

    return 0;
}
