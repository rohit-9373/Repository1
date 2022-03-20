#include<iostream>
#include<fstream>
using namespace std;


class student
{
   public:
   int id;
   char name[50];
   char branch[50];
   char location[50];
   student() { }
   void getData()
   {
   cout << "\nEnter id:";
   cin >> id;
   cin.ignore(); 
   cout << "\nEnter Name:";
   cin.getline(name, 50);
   cout << "\nEnter branch:";
   cin.getline(branch, 50);
   cout << "\nEnter location:";
   cin.getline(location, 50);
   }
   void displayData()
   {
   cout << "\nid :: " << id << endl;
   cout << "\nName :: " << name << endl;
   cout << "\nBranch :: " << branch << endl;
   cout << "\nLoaction :: " << location << endl;
   }
};


int main()
{
   student s[3]; 
   fstream file;
   int i;
   int st;
   int choice;
   cout<<"............Menu.............."<<endl;
   cout<<"1. Enter student details"<<endl;
   cout<<"2. Find student"<<endl;
   cout<<"..............................."<<endl<<endl;
   cout<<"Enter your choice:";
   cin>>choice;

   if(choice == 1)
   {
      file.open("student.txt", ios :: out); 
      cout << "\nHow many students data that you want to enter?:";
      cin>>st;
   for (i = 0; i < st; i++)
    {
      s[i].getData();
    
      file.write((char *)&s[i], sizeof(s[i]));
    }
     file.close(); 
   }
   else if(choice == 2)
   {
     file.open("student.txt", ios :: in); 
  
    int read_id;
    try
    {
    cout<<"enter student ID that you want to search:";
    cin>>read_id;
    for (i = 0; i < read_id-1; i++)
    {
  
      file.read((char *)&s[i], sizeof(s[i]));
     
    }
     file.read((char *)&s[read_id], sizeof(s[read_id]));
     
     s[read_id].displayData();
     file.close();
     if(s[read_id].id == 0)
     {
        throw 1;
     }
    
     
    }
    catch(int x)
    {
       cout<<"student not exist"<<endl;
    }
   }
   else
   {
      cout<<"Invalid choice"<<endl;
   }
  
   return 0;
}