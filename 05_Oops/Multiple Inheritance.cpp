#include<iostream>
using namespace std;
class A
{
     public:
     void print()
     {
        cout<<"Hello"<<endl;
     }
};
class B
{
     public:
     void print()
     {
        cout<<"World"<<endl;
     } 
};
class C
{
     public:
     void print()
     {
        cout<<"Ram"<<endl;
     }
};
class D : public A, public B, public C
{
  public:
  void fun()
  {
    cout<<"Hello world Ram"<<endl;
  }
};
int main()
{
    D obj;
    obj.A::print();     //Here :: is called as Scope resolution operator because of the ambiguity. 
    obj.B::print();
    obj.C::print();
}
