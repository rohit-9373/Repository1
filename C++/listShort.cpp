#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> lst1, lst2;
    int i;
    for(i=0;i<10;i++)
    {
        lst1.push_back(rand()%20);
    }
    for(i=0;i<10;i++)
    {
        lst2.push_back(rand()%20);
    }
    cout<<"Contents of list 1: ";
     list<int>::iterator p = lst1.begin();
     while(p != lst1.end())
     {
         cout<<*p<<" ";
         p++;
     }
     cout<<endl<<endl;
     cout<<"Contents of list 2: ";
     p = lst2.begin();
     while(p != lst2.end())
     {
         cout<<*p<<" ";
         p++;
     }
      cout<<endl<<endl;
     lst1.sort();
     lst2.sort();
     cout<<"list 1 after sorting:"<<endl;
     p = lst1.begin();
     while(p != lst1.end())
     {
         cout<<*p<<" ";
         p++;
     }

     cout<<endl<<"list 2 after sorting:"<<endl;
     p = lst2.begin();
     while(p != lst2.end())
     {
         cout<<*p<<" ";
         p++;
     }
     
     
   
     
}