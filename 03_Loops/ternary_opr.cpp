#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks: ";
    cin>> marks;
    string result = (marks>=39)? "Pass": "Fail";
    cout<<"You are "<<result;
}