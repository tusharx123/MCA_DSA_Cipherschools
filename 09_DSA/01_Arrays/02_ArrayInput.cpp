#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        cin>> arr[i];
    }
    cout<<"Elements in the Array are: "<<endl;
    for(int i=0; i<5; i++)
    {
        cout<< arr[i]<<endl;
    }
}