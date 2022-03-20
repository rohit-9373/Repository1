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
        cout<<"enter roll no:";
        cin>>roll;
        cout<<"enter name:";
        cin>>name;
        cout<<"marks:";
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

    void display()
    {
        fstream f;
        student s;
        f.open("student.dat",ios::in|ios::binary);
        f.read((char*) &s,sizeof(s));
        cout<<"Roll "<<s.roll<<" Name "<<s.name<<" Mark:"<<s.marks<<endl;
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
    s.display();
}