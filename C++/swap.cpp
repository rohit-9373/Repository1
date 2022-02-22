#include <iostream>
using namespace std;

void swap(int a,int b)
{
    int temp;
    cout << "Before:" << endl;
    cout << "a:" << a << ", b:" << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "\nAfter:" << endl;
    cout << "a:" << a << ", b:" << b << endl; 
}

void swapPointer(int *x,int *y){

      int temp;
      cout << "Before:" << endl;
      cout << "a:" << *x << ", b:" << *y << endl;
      temp = *x; 
      *x=*y;
      *y=temp;
      cout << "\nAfter:" << endl;
      cout << "a:" << *x << ", b:" << *y << endl; 
 
}
int main()
{
    swap(1,2);
    int a = 1;
    int b= 2;
    cout<<endl<<"using pointer:"<<endl<<"__________________"<<endl;
    swapPointer(&a,&b);
    return 0;
}


