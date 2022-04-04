#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void remove_dup_string(vector<string> &str)
{
    auto end = str.end();
    for (auto it = str.begin(); it != end; ++it) {
        end = remove(it + 1, end, *it);
    }
 
    str.erase(end, str.end());
}
int main()
{
    vector<string> names1;
    vector<string> names2;
    

    cout<<"enter names in vector 1"<<endl<<"........................"<<endl;
    vector<string>:: iterator p1 =  names1.begin();
    for(int i =0 ;i<5;i++)
    {
        string temp;
        cin>>temp;
        names1.push_back(temp);
        p1++;
    }

    cout<<endl;
    cout<<"enter names in vector 2"<<endl<<"........................"<<endl;
    vector<string>:: iterator p2 =  names1.begin();
    for(int i =0 ;i<5;i++)
    {
        string temp;
        cin>>temp;
        names2.push_back(temp);
        p2++;
    }
    
    cout<<endl;
    vector<string> vect1(names1.size() + names2.size());
    merge(names1.begin(),names1.end(),names2.begin(),names2.end(),vect1.begin());
    remove_dup_string(vect1);
    cout<<"Output:"<<endl<<"......."<<endl;
    vector<string>:: iterator p3 =  vect1.begin();
    for(int i =0 ;i<vect1.size();i++)
    {
       
        cout<<*p3<<" ";
        p3++;  
    }

 
  

  
    
}