#include<iostream>
using namespace std;

void at_last(int arr[], int size)
{
    int i=0;
    int zeroes =0;
    while(i<size)
    {
        if(arr[i]!= 0)
        {
        arr[zeroes++] = arr[i];
        }
        i++;
        
    }
    while(zeroes<size)
    {
        arr[zeroes]= 0;
        zeroes++;
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
    at_last(array,size);
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
}