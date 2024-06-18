//Friend functions

#include <iostream>
using namespace std;

class Distance
{
    private:
    int meter;
    friend int IncreaseDistance(Distance);

    public:
    Distance()
    {
        meter =0;
    }
};

int IncreaseDistance(Distance d)
{
    d.meter +=10;
    cout<< d.meter;
    return d.meter;
}

int main()
{
    Distance d1;
    IncreaseDistance(d1);
    
}