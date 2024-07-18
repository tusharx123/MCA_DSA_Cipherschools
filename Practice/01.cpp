#include<iostream>
using namespace std;
int main()
{
int a= 10;
int b= a++;           //value of a is updated after the expression.
cout<<a<<" "<<b<<endl;

int c = 11;
int d = ++c;
cout<<c<<" "<<d;        // value of a is updated first in the expression
//same for decrement.
}