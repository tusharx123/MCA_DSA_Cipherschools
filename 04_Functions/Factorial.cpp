#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact =1 ;
    for(int i=1;i<=n;i++)
    {
        fact *= i;
    }
    return fact;
}
int ncr(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main()
{
    int n,r,c;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    
    int result = ncr(n,r);
    cout<<result;
    
}