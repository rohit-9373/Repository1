#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<< "enter n1:";
    cin>>n1;
    cout<< "enter n2:";
    cin>>n2;
    try
    {
       if(n2==0)
       {
           throw n2;
       }
       else
       {
         int result  = n1/n2;
         cout<< "result is:"<<result;  
       }
    }
    catch(int x)
    {
        cout<<"\ncant divide by:"<<x;
    }
    
    
}