// Quick sort algorithm involves taking a pivot element.
// Pivot element can be random, starting element, ending element or middle element.
// Usually  starting element is taken as pivot.
// Take pivot to its right position.
// All the elements less than pivot should be on left side of the pivot and all the elements greater than pivot should be on the right side of pivot

#include<iostream>
using namespace std;

int partiton(int arr[],int s , int e)
{
    //find the first element
    int pivot = arr[s];
    int count =0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
    //after count, we get to know about the right place of pivot, 
    //now we will create a var pivotindex at that position.
    int pivotindex = s+count;
    swap(arr[pivotindex],arr[s]);
    int i=s, j=e;
    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        swap(arr[i++],arr[j--]);
    }
    return pivotindex;
}
void quickSort(int arr[],int s, int e)
{
    if(s>=e)
    {
        return;
    }
    int p = partiton(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main()
{
    int arr[5] = {3,4,1,7,9};
    int n=5;
    quickSort(arr,0,n-1);
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


