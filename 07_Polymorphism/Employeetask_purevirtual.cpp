#include<iostream>
using namespace std;
class Employee
{
    public:
    virtual void salary() = 0;

};
class Fulltime : public Employee
{
    public:
    void salary() override{
        cout<<"Salary of full time employee is 30000";
    }
};
class Contract : public Employee
{
    public:
    void salary() override
    {
        cout<<"Salary of Contract employee is 20000";
    }
};
int main()
{
    Fulltime obj1;
    Contract obj2;
    Employee *ptr1 = &obj1; 
    Employee *ptr2 = &obj2;
    ptr1->salary();
    cout<<endl;
    ptr2->salary();
    

}