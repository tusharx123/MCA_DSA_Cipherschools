#include<iostream>
using namespace std;
int main()
{
    int num=0;
    string res = (num==0)?"Zero":((num>0)?"Positive":"Negative");
    cout<<"Number is : "<<res<<endl;
}