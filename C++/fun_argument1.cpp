#include <iostream>
using namespace std;

class arg{
    public:
        int add(int a,int b=2,int c=3)
        {
            return a+b+c;
        }
};
int main() {
    
    arg ob1;
    cout<<ob1.add(1);
    return 0;
}
