#include<iostream>
using namespace std;

int main()
{
    int a=3;
    try
    {
       if(a==1)
       {
           throw a;
       }
       else if(a==2)
       {
         throw 'A';
       }
       else if(a==3)
       {
         throw 4.5;
       }
    }
    catch(int x)
    {
        cout<<"\nint Exception";
    }
    catch(char st)
    {
        cout<<"\nchar Exception";
    }
    catch(double f)
    {
        cout<<"\n float Exception";
    }
    
    
    
}