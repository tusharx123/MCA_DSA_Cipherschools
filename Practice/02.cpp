#include<iostream>
using namespace std;

int max_element(int arr[], int size)
{
    int max = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}

int min_element(int arr[], int size)
{
    int min = INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    cout<<"Enter the size of the array: "<<endl;
    int size;
    cin>>size;
    int arr[size];

    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    char option;
    cout<<"Choose option A or B: "<<endl;
    cout<<"Option A for finding the Maximum element of the array"<<endl;
    cout<<"Option B for finding the Minimum element of the array"<<endl;
    cin>>option;
    switch(option)
    {
        case 'A':
            cout<<"Maximum element present in the array: "<<max_element(arr,size)<<endl;
            break;
        case 'B':
            cout<<"Minimum element present in the array: "<<min_element(arr,size)<<endl;
        default:
            cout<<"Invalid Input"<<endl;

    }
}