#include<fstream>
#include<iostream>
using namespace std;

class student{
    public:
    int roll;
    char name[25];
    float marks;

    void getData()
    {
        cout<<"enter roll no and name:"<<endl;
        cin>>roll>>name;
        cout<<"marks"<<endl;
        cin>>marks;
    }

    void AddRecord()
    {
        fstream  f;
        student stu;
        f.open("student.dat",ios::app|ios::binary);
        stu.getData();
        f.write((char*)&stu,sizeof(stu));
        f.close();
    }
};

int main()
{
    student s;
    char ch = 'n';
    do{
        s.AddRecord();
        cout<<"want add more?(y/n)"<<endl;
        cin>>ch;
    }while(ch == 'y' || ch == 'Y');
    cout<<"updated"<<endl;
}