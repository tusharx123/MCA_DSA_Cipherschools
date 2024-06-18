#include<iostream>
using namespace std;
template <class T>
class Add
{
    private:
    T num1;
    T num2;
    public:
    Add(T num1, T num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    T getAdd()
    {
        return num1 + num2;
    }
};
int main()
{
    Add <int> n1(12,31);
    cout<<n1.getAdd()<<endl;
    Add <double> n2(12.33,33.22);
    cout<<n2.getAdd();

}