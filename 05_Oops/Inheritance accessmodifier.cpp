#include<iostream>
using namespace std;
class Base
{
    public:
    int x;
    private:
    int y;
    protected:
    int z;
};
class class1 : public Base
{
    // x is public
    //y is protected
    //z is not accessible
};
class class2 : private Base
{
    // x is protected
    // y is protected
    // z is not accessible
};
class class3 : protected Base
{
    // x is protected
    // y is protected
    //z is not accessible
};


