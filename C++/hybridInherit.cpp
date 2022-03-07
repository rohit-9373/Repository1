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

class doctor : public person
{
  private:
  int weight = 70;
  
  public:
  void displaY()
  {
     cout<<"weight:"<<weight<<endl; 
  }
};
class ex3 : public person
{
  private:
  int age = 20;
 
  public:
  
  void dis()
  {
     cout<<"Age:"<<age<<endl; 
  }
};

class ex4 : public doctor,public ex3
{
  private:
  int ex4 = 4;
 
  public:
  
  void dis4()
  {
     cout<<"class:"<<ex4<<endl; 
  }
};



int main() {
    ex4 obj1;
   
    obj1.dis();
    obj1.dis4();
    return 0;
}
