#include<iostream>
using namespace std;
int  fun(int a, int b)
{
    return a+b;
}

float fun(float a, float b)
{
    return a+b;
}
int fun(int a, int b, int c)
{
    return a+b+c;
}
int main()
{
    
    cout<< "Sum is : "<<fun(2,3)<<endl;
    cout<< "Sum is : "<<fun(5.9f,6.6f)<<endl;
    cout<< "Sum is : "<<fun(2,4,5);

    
}