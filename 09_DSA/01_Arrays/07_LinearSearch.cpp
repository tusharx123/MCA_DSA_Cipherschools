#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]== key)
        {
            return true;
        }
        
        
    }
    return false;
}
int main()
{
    int size;
    int key;
    
    cout<<"Enter the size of the array: ";
    cin>> size;
    int array[size];
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the element to search: ";
    cin>> key;

    bool result =  linearSearch(array,size, key);
    if(result)
    {
        cout<<"Element found in the array.";
    }
    else{
        cout<<"Element not found in the array.";
    }


}