//rohit chavda
#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main(){

   
    
   vector<int> arr;
    int num;
    int temp;
    cout<<"enter number of ele:";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cout<<"enter no "<<i<<":";
        cin>>temp;
        arr.push_back(temp);
    }
   int k;
   cout<<"enter number of subset elements:";
   cin>>k;
   deque<int> Qi(k);
   int i;
   for (i = 0; i < k; ++i){
      while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
         Qi.pop_back();

         Qi.push_back(i);
     }
     cout<<"Max"<<endl;
     for ( ; i < arr.size(); ++i){
        cout << arr[Qi.front()] << " ";
        while ( (!Qi.empty()) && Qi.front() <= i - k)
            Qi.pop_front();
        while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();
        Qi.push_back(i);
    }
    cout << arr[Qi.front()] << endl;
}