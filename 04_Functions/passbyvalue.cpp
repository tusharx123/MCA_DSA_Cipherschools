#include<iostream>
using namespace std;
void test(int n)
{
    n++;
    cout<<"Value of n is: "<<n<<endl;
}
int main()
{
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    test(n);
    cout<<"Value of n in main is: "<<n<<endl;

}
