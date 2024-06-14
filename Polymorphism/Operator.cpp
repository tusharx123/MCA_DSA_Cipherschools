#include<iostream>
using namespace std;

class Count
{
    private:
    int value;
    public:
    Count()
    {
        value=5;
    }
    void operator ++()
    {
        value += 10;
    }
    void display()
    {
        cout<< "Count: "<<value<<endl;
    }
};
int main()
{
    Count c;
    c.display();
    ++c;
    c.display();
}