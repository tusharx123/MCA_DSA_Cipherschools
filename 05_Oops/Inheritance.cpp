#include <iostream>
using namespace std;

class Animal
{
    public:
    void eat()
    {
        cout<<"Eating.."<<endl;                // child class has access to public methods of parent class
    }                                          // child class dont have access to private methods of parent.
    private:
    void privatemethod()
    {
        
    }    
    protected:
    void protectedmethod()
    {

    }                               
};
class Dog : public Animal
{
    public:
    void bark()
    {
        cout<<"Barking.."<<endl;
    }
};
int main()
{
    Dog d1;
    d1.bark();
    d1.eat();
    
}