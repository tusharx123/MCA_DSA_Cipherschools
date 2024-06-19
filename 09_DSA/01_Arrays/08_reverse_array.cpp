#include<iostream>
using namespace std;

void reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size-1;
    while(start<=end)
    {
        swap(arr[start], arr[end]);
        
        start++;
        end--;
    }
    
}
int main()
{
    int array[9] = {1,2,3,4,5,6,7,8,9};
    cout<<"Array before reversing: "<<endl;
    for(int i=0; i<9;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"After reversing the array: "<<endl;
    reverseArr(array,9);
    for(int i=0; i<9; i++)
    {
        cout<<array[i]<<" ";
    }
}