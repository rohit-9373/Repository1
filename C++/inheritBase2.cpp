#include <iostream>
using namespace std;

class person
{
    private:
    int height=6;
    friend int main();
    void display()
    {
        cout<<"height:"<<height<<endl;
    }
};

class doctor : protected person
{
  private:
  int weight = 70;
  friend int main();
  void displaY()
  {
     cout<<"weight:"<<weight<<endl; 
  }
};
class ex3 : private doctor
{
  private:
  int age = 20;
  friend int main();
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
