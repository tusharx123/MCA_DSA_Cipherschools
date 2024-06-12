#include<iostream>
using namespace std;
class Employee
{
    private:
    string name;
    int age;
    float salary;

    public:
    Employee(string name, int age, float salary){
        this->name = name;
        this->age= age;
        this->salary =salary;
    }
    
    string getname()
    {
        return name;
    }
    void setname(string name)
    {
        this->name=name;
    }
    int getage()
    {
        return age;
    }
    void setage(int age)
    {
        this->age=age;
    }
    float getsalary()
    {
        return salary;
    }
    void setsalary(float salary)
    {
        this->salary = salary;
    }

    void display()
    {
        cout<<"Name of Employee: "<<name<<endl;
        cout<<"Age of Employee: "<<age<<endl;
        cout<<"Salary of Employee: "<<salary<<endl;
    }

};


 int main()
    {
        string name;
        int age;
        float salary;
        cout<<"Enter name: ";
        cin>> name;
        cout<<"Enter age: ";
        cin>> age;
        cout<<"Enter your salary: ";
        cin>> salary;
        Employee obj(name,age,salary);
        obj.display();
    }
