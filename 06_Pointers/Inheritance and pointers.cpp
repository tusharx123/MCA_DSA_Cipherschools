#include<iostream>
using namespace std;
class Base
{
    public:
    void print()
    {
        cout<<"From Base class"<<endl;
    }
};
class Derived : public Base{
    public:
    void print()
    {
        cout<<"From Child Class"<<endl;      
    }
    
};
int main()
{                                       // preference is given to child class fun. but to call the parent fun(). do this code..
    Derived d;
    Base *ptr= &d;                      //only case:  We cant create object of parent and pointer of child class to do this.
    ptr->print();
  
    Derived *ptr2= &d;
    ptr2->print();
}