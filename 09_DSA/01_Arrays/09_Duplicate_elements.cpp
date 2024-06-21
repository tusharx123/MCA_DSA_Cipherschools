#include<iostream>
using namespace std;

void duplicateelement(int arr[], int size)
{
    cout<<"Duplicate values in the array are: "<<endl;
    for(int i=0; i<size-1; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if( arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
            }
        }
    }
}
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[size];
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    
    duplicateelement(array,size);
    
}
