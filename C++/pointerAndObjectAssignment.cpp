#include<iostream>
using namespace std;

class student
{
    private:
    int marks;
    string name;
    public:
    int roll_no;

    void getData(int a,int b,string c)
    {
      marks =a;
      roll_no = b;
      name = c;

    }
    int printData()
    {
       cout<<"name:"<<name<<endl<<"roll no:"<<roll_no<<endl<<"marks:"<<marks<<endl;
    }
};

class derived : public student
{
   
   
};
int main()
{
  int m,r;
  string n;
  derived ob[3];
  derived *ptr=ob;
  for(int i=0;i<3;i++)
    {
    cout<<"enter name:";
    cin>>n;
    cout<<"enter marks:";
    cin>>m;
    cout<<"enter roll no:";
    cin>>r;    
    ptr->getData(m,r,n);
    cout<<"your entered data"<<endl;
    cout<<ptr->printData()<<endl;
    ptr++;
    }

  
    
    
    
   
}