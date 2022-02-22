#include <iostream>
using namespace std;

class example{
    private:
        int a=2,b=3;
        friend int main();
        void disp()
        {
         cout<<a<<endl<<b;   
        }
};
int main() {
    example ob;
    ob.disp();
   
    return 0;
}
