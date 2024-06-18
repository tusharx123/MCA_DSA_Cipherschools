// numA is private variable and it can't be accessed in class other than child class. So, we have these 2 classes as friends. 
// Therefore all the private variable of A class can be accessed by the B class.
#include<iostream>
using namespace std;
class A
{
    private:
    int numA;
    friend class B;
    public:
    A()
    {                                           
        numA =5;
    }
};
class B 
{
    private:
    int numB;
    public:
    B()
    {
        numB =10;
    }
    int add()
    {
        A a1;
        return a1.numA + numB;
    }

};
int main()
{
    B obj;
    cout<<"Adding 2 numbers: "<<obj.add();
}