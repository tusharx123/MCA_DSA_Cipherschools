#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter number 1: ";
    cin>> a;
    cout<<"Enter number 2: ";
    cin>> b;
    cout<<"Enter number 3: ";
    cin>> c;
    if(a>=b && a>=c)
    {
        cout<<"The largest number is: "<<a<< endl;
    }
    else if (b>=a && b>=c)
    {
        cout<<"The largest number is: "<<b<<endl;

    }
    else{
        cout<<"The largest number is: "<<c<<endl;
    }
}

    
    
