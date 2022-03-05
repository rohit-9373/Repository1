#include<iostream>
using namespace std;

class addAmount
{
    private:
    int amount=50;
    public:
    addAmount()
    {
        
    }
    addAmount(int value)
    {
      amount += value;  
    }
    display()
    {
        cout<<"final Amount is:"<<amount;
    }
};

int main()
{
    int temp;
    cout<<"enter Amount that you want to add:";
    cin>>temp;
    addAmount obj1(temp);
    obj1.display();
}