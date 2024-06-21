//Binary Search Tree
//1. Sort the array
//2. 
#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;

    while(start<=end)
    {
    if(arr[mid]==key)
    {
        return mid;
    }
    
    
    else if(key> arr[mid])    // go to right part of the array
    {
        start = mid + 1;
    }
    else
    {
        end = mid - 1;   // go to left part of the array
    }
        mid = (start + end)/2;
    }
    
    return -1;
    
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int key = 9;
    int result = binarysearch(arr,9,9);
    cout<<"Key is found at "<<result<<" position";
}