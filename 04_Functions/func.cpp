#include<iostream>
using namespace std;

void fun2()
{
    cout<<"2"<<endl;
}
void fun()
{
    cout<<"1"<<endl;
    fun2();
}

int main()
{
    fun();
}