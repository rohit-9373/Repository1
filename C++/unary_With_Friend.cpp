#include<iostream>
using namespace std;
class exa
{
     private:
     int a=1;
     int b=2;
     int c=3;
     public:
         void disp()
         {
              cout<<a<<endl<<b<<endl<<c<<endl;
         }
         void friend operator-(exa &x);     
};
void operator-(exa &x)
{
     x.a = -x.a;     
     x.b = -x.b;
     x.c = -x.c;
}
int main()
{
     exa obj1;
     cout<<"Before:"<<endl;
     obj1.disp();
     cout<<"After:"<<endl;
     -obj1;
      obj1.disp();
      return 0;
}
