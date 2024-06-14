#include<iostream>
using namespace std;
class Base
{
    public:
    void print()
    {
        cout<<"Hello"<<endl;
    }
};
class Derived : public Base{
    public:
    void print()
    {
        cout<<"World"<<endl;       //preference given to child function.
    }
    
};
int main()
{
    Derived d;
    d.print();
    d.Base::print();
}