#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int rollno;
    int age;
    char grade;
    public:
    Student(string name, int rollno, int age, char grade)
    {
        this-> name= name;
        this-> rollno = rollno;
        this-> age = age;
        this-> grade = grade;
    }
    string getname()
    {
        return name;
    }
    void setname(string name)
    {
        this->name =name;
    }
    int getrollno()
    {
        return rollno;
    }
    void setrollno(int rollno)
    {
        this->rollno =rollno;
    }
    int getage()
    {
        return age;
    }
    void setage(int age)
    {
        this->age=age;
    }
    char getgrade()
    {
        return grade;
    }
    void setgrade(char grade)
    {
        this->grade =grade;
    }
    void print()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Grade: "<<grade<<endl;
    }

};
int main()
{
    Student obj("Tushar",23,20,'S');
    obj.print();

    obj.setname("Anshul");
    obj.print();



}