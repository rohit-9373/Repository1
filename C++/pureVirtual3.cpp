#include<iostream>
using namespace std;

class convert
{
    protected:
    double value1;
    double value2;
    public:
    convert(double i)
    {
        value1 = i;
    }
    double getconv()
    {
        return value2;
        
    }
    double getinit()
    {
        return value1;
        
    }

    virtual void compute()=0;
   
};

class l_to_g : public convert
{
  public:
    l_to_g(double i):convert(i){}
    void compute()
    {
        value2 = (value1/3.78);
    }
   
};
class f_to_c : public convert
{
    public:
    f_to_c(double i):convert(i){}
    void compute()
    {
        value2 = (value1-32)/1.8;
    }
};
int main()
{
  convert *p;
  l_to_g lgob(4);
  f_to_c fcob(70);
  p =&lgob;
  cout<<p->getinit()<<" liters is:";
  p->compute();
  cout<<p->getconv()<<" gallons\n";
  p = &fcob;
  cout<<p->getinit()<<" in fahrenheit is:";
  p->compute();
  cout<<p->getconv()<<" celsius\n";
  return 0;
 
}