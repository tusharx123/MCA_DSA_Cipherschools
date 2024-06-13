#include<iostream>
using namespace std;
int main()
{
    int x=20;
    int *ptr = &x;
    int **ptr2 = &ptr;
    int *ptr3 = NULL;
    
    cout<<x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl; //dereferencing 20
    cout<<&ptr<<endl;// address of ptr
    cout<<&x<<endl; // address of x
    cout<<ptr2<<endl;
    cout<<ptr3;
}