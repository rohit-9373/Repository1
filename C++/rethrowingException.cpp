#include<iostream>
using namespace std;

int main()
{
    int a=3;
    try
    {
       try
       {
        
         throw a;
       }
       catch(int x)
    {
        cout<<"\nException in inner try";
        throw x;
    }
      
    }
    catch(int y)
    {
        cout<<"\nException in outer try";
    }
    
    
    
    
    
}