#include <iostream>
using namespace std;

class Distance{
    public:
        int feet;
        int inch;
        Distance()
        {
            cout<<"under constructor"<<endl;
        }
         ~Distance()
        {
            cout<<"under destructor"<<endl;
        }
};
int main() {
    
  Distance obj1;
  Distance obj2;
 

    return 0;
}
