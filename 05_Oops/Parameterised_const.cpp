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
        this->name = name;             // It is a parametrised constructor.
        this->age = age;
    }
    Person(Person &obj)                // It is a copy constructor.
    {
        name = obj.name;
        age= obj.age;
    }
    void print()
    {
        cout<<"Name of Person : "<<name<<endl;
        cout<<"Age of Person : "<<age<<endl;
    }
    ~Person()
    {
        cout<<"Destructor destroys the object"<<endl;
    }

};
int main()
{
    Person obj1;
    Person obj2("John",23);
    obj2.print();
    Person obj3(obj2);
    obj3.print();
}