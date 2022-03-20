#include<iostream>
#include<exception>
using namespace std;

 int main()
 {
     try
     {
         int* myArray = new int[100000000000000];

     }
     catch(exception &e)
     {
         cout<<"Std exception"<<e.what()<<endl;
     }
 }
