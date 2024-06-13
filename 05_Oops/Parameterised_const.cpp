#include<iostream>
using namespace std;
class Person
{
    public:
    string name;
    int age;

    Person()
    {
        cout<<"It is a default constructor"<<endl;
    }

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void print()
    {
        cout<<"Name of Person : "<<name<<endl;
        cout<<"Age of Person : "<<age<<endl;
    }
    ~Person()
    {
        cout<<"Destructor destroys the constructor"<<endl;
    }

};
int main()
{
    Person obj1;
    Person obj2("John",23);
    obj2.print();
}