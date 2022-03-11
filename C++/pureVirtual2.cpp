#include<iostream>
using namespace std;

class base
{
    public:
    virtual void show()
    {
        cout<<"Base\n";
    }
};

class derived : public base
{
  public:
  /*void show()
  {
      cout<<"derived\n";
  } */ 
   
};
class derived2 : public base
{
  public:
  void show()
  {
      cout<<"derived2\n";
  }  
   
};
int main()
{
 derived dv; 
 derived2 dv2;
 base* ptr;
 ptr = &dv;
 ptr->show();
 ptr = &dv2;
 ptr->show();
 dv.show();
 
}