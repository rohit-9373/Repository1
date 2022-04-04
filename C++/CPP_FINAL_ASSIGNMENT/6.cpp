#include<iostream>
using namespace std;

bool first,second,third;
int count = 0;
void checker(int A,float ts,int tos)
{
   
    if(A>50)
    {
       first = true;
       count++;
    }
    else
    {
       first = false;
    }

    if(ts>0.70)
    {
        second = true;
        count++;
    }
    else
    {
        second = false;
    }
    
    if(tos>5600)
    {
        third = true;
        count++;
    }
    else
    {
        third = false;
    }
}
int main()
{
    int grade;
    int Attend,totalScore;
    float testScore;
    cin>>Attend>>testScore>>totalScore;
    checker(Attend,testScore,totalScore);
    if(count == 3)
    {
        grade = 10;
    }
    else if(count == 2)
    {
    if(first && second)
    {
        grade == 9;
    }
    
    else if(second && third)
    {
        grade = 8;
    }
    else if(first && third)
    {
        grade = 7;
    }
    }
    
    if( count == 1)
    {
        grade = 6;
    }
    else
    {
        grade= 5;
    }
    
    cout<<"res:"<<grade<<endl;
 
    


}