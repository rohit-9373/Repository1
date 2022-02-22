#include <iostream>
using namespace std;
int sum(int i)
{
   cout<<i<<endl; 
}
int sum(int i,int j)
{
   cout<<i<<j<<endl;  
}
int sum(int i,int j,int k)
{
   cout<<i<<j<<k<<endl;   
}
int main() {
   sum(1);
   sum(2,3);
   sum(4,5,6);
    
    return 0;
}
