#include<iostream>
using namespace std;
int main()
{
    char op;
    int num1,num2;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    cout<<"Enter the operator: ";
    cin>>op;
    switch(op)
    {
        case '+':
            cout<<num1+num2;
            break;
        case '-':
            cout<<num1-num2;
            break;
        case '*':
            cout<<num1*num2;
            break;
        case '/':
            cout<<num1/num2;
            break;
        case '%':
            cout<<num1%num2;
            break;
        default:
            cout<<"Invalid Input";
            break;
    }

}