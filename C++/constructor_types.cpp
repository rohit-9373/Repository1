#include <iostream>
using namespace std;

class example{
    public:
        int a,b;
        example()
        {
            a = 3;
            b = 4;
            cout<<"Default constructor"<<endl;
        }
        example(int aa,int bb)
        {
            a = aa;
            b = bb;
        }
        example(example &ob)
        {
            a = ob.a;
            b = ob.b;
          cout<<ob.a<<endl<<ob.b;  
        }
        ~example()
        {
            cout<<"Reset"<<endl;
        }
    
};
int main() {
   example ob1;
   example ob2(10,20);
   example ob3(ob1);
   cout<<ob1.a<<endl<<endl<<ob1.b<<endl;
   cout<<"Parameterized constructor:"<<endl;
   cout<<ob2.a<<endl<<ob2.b<<endl;
   cout<<"Copy constructor:"<<endl;
    cout<<ob3.a<<endl<<ob3.b<<endl;
   

    return 0;
}
