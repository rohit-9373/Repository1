#include<iostream>
using namespace std;

class Shape
{
    protected:
    float x;
    public:
    void getData()
    {
        cout<<"enter:";
        cin>>x;
    }
    virtual float calculateArea()=0;
};

class Squre : public Shape
{
  public:
  float calculateArea()
  {
      return x*x;
  }  
   
};

int main()
{
 Squre ob;
 ob.getData();
 cout<<ob.calculateArea();
 
}