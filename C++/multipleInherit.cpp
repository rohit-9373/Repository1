#include <iostream>
using namespace std;

class person
{
    private:
    int height=6;
   
    public:
    void display()
    {
        cout<<"height:"<<height<<endl;
    }
};

class doctor 
{
  private:
  int weight = 70;
  
  public:
  void displaY()
  {
     cout<<"weight:"<<weight<<endl; 
  }
};
class ex3 : public person,public doctor
{
  private:
  int age = 20;
 
  public:
  
  void dis()
  {
     cout<<"Age:"<<age<<endl; 
  }
};



int main() {
    ex3 obj1;
    obj1.display();
    obj1.displaY();
    obj1.dis();
    return 0;
}
