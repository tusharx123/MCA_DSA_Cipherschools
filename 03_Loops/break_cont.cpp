#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=10;i++)
    {
        if(i==9)
        {
            break;
        }
        cout<<i<<endl;
    }
    for(int i=10;i>=0;i--)
    {
        if(i==2)
        {
            continue;
        }
        cout<<i<<endl;
    }
}