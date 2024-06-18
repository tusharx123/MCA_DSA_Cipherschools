//pure virtual function
//Why?
// If a function doesn't have any use in the base class but the function must be implemented by all its derived class.
// A class that contains a pure virtual function is called a Abstract class.


#include<iostream>
using namespace std;
class A
{
    public:
    virtual void display() = 0; //pure virtual function

};
class B : public A
{
    public:
    void display() override{
        cout<<"From B";
    }
};
class C : public A
{
    public:
    void display() override
        {
            cout<<"From C";
        }
    
};
int main()
{
    C obj1;
    B obj2;
    A *ptr = &obj1;
    ptr-> display();
    cout<<endl;
    A *ptr2 = &obj2;
    ptr2->display();
    
}

