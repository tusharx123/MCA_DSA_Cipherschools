#include <iostream>
using namespace std;
template <class T>
class Number
{
    private:
    T num;
    public:
    Number(T number)
    {
        num = number;
    }
    T getnum()
    {
        return num;
    }

};
// Template of a function adding different datatypes.
template <typename T, typename T2>
auto add(T a, T2 b)
{
    return a + b;
}


int main()
{
    Number<int> n1(10);
    cout<<n1.getnum()<<endl;
    Number <double> n2(10.23);
    cout<<n2.getnum()<<endl;
    cout<< add(1,2.3);

}