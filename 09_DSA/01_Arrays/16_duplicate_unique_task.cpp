//given an integer array sorted in non descending order, remove the duplicates in place such that each unique element should be printed in 
// the starting and no matter what are the elements after the unique . Also print the number of unique elements.

//if there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. it Doesn't matter 
// you leave the first k elements.

#include<iostream>
using namespace std;

int uniqueelements(int arr[], int size)
{
    int i=0;
    for(int j=i+1; j<size; j++)
    {
        if(arr[i]!= arr[j])
        {
            i++;
            arr[i]= arr[j];
        }
    }
    return i+1;
}
int main()
{
    int arr[] = {1,1,2,2,2,3,3};
    int k= uniqueelements(arr,7);
    for(int i=1; i<=k;i++)
    {
        cout<< i <<" ";
    }
}