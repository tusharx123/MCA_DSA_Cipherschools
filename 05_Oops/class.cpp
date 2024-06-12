#include<iostream>
using namespace std;
class Area
{
    public:
    double length;
    double breadth;
    double height;

    double calcarea()
    {
        return length*breadth;
    }
    double calcvol()
    {
        return length*breadth*height;
    }


};
int main()
{
    Area obj1 ;
    obj1.length =20;
    obj1.breadth = 30;
    obj1.height =15;
    
    Area obj2;
    obj2.length =10;
    obj2.breadth = 50;
    obj2.height =15;
    cout<<obj2.calcarea();


}