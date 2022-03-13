#include<iostream>
using namespace std;

int main()
{
    float n1,n2;
    cout<< "enter n1:";
    cin>>n1;
    cout<< "enter n2:";
    cin>>n2;
    try
    {
       if(n2!=n1)
       {
           float div = n1/n2;
           if(div<1)
           {
               throw 'e';
           }
          cout<<"n1/n2="<<div;
       }
       else
       {
         throw n2;
       }
    }
    
    catch(char st)
    {
        cout<<"\nException: division less than 1";
    }
    
    
}