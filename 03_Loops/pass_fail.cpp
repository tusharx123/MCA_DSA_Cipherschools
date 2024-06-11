#include<iostream>
using namespace std;
int main()
{
    int eng, math, phy;
    cout<<"Enter your marks out of 100"<<endl;
    cout<<"Enter English marks: ";
    cin>>  eng;
    cout<<"Enter Maths marks: ";
    cin>> math;
    cout<<"Enter Physics marks: ";
    cin>> phy;
    float sum = eng+math+phy;
    float perc;
    perc = (sum/300)*100;
    cout<<"Your percentage is: "<<perc<<endl;
    if(perc > 60)
    {
        cout<<"Your are pass"<<endl;
    }
    else{
        cout<<"You are fail";
    }


}