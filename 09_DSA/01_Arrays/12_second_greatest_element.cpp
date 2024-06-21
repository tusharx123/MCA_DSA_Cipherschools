#include <iostream>
using namespace std;
int  secondgreatest(int arr[], int size)
{
    int largest1;
    int largest2 ;
    largest1=INT_MIN;
    largest2=INT_MIN;
    for(int i= 0; i<size; i++)
    {
        if(arr[i]>largest1)
        {
            largest1 = arr[i];
        }
    }
    for(int i=0; i<size; i++)
    {
        if(arr[i]<largest1 && arr[i]>largest2)
        {
            largest2 = arr[i];
        }
    }
    return largest2;
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
    int largest2 = secondgreatest(array, size);
    cout<<"Second greatest element in the array: "<<largest2;

}