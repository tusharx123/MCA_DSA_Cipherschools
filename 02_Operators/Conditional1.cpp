#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>> age;
    if(age>80)
    {
        cout<<"You are old"<<endl;
    }
    else if(age>30 && age<80)
    {
        cout<<"You are adult"<<endl;

    }
    else if(age<30 && age>0)
    {
        cout<<"You are young"<<endl;
    }
    else{
        cout<<"Invalid age";
    }
}