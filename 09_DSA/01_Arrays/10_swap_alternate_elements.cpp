//swap alternate elements of the array
//pair sum
//triplet sum
// sort 0's and 1's
// find unique elements
// find duplicate
//sort the array and print all the zeroes at last
//given an integer array in non decreasing order
// kadane's algorithm

#include <iostream>
using namespace std;

void swapalternateelements(int arr[], int size)
{
    for(int i=0; i<size ; i+=2)
    {
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1] = temp;
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
    cout<<"Array before swapping: "<<endl;
    for(int i=0;i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    swapalternateelements(array,size);
    cout<<endl;
    cout<<"Array after swapping: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }

}