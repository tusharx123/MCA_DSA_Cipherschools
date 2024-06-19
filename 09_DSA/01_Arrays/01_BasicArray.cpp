//Array 
#include<iostream>
using namespace std;

int main()
{
    int arr[5]={2,3,4,5,6};
    for(int item : arr)
    {
        cout<<item<<" " ;
    }
    cout<<endl;
    arr[2] = 12;
    for(int item : arr)
    {
        cout<<item <<" ";

    }

}
 