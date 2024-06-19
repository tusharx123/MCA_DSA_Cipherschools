#include<iostream>
using namespace std;
int maxvalue(int arr[], int size)
{
    int max = arr[0];
    for(int i=0; i<size; i++)
    {
        
        if(arr[i]> max)
        {
            max = arr[i];
        }
    }
    return max;
}

int minvalue(int arr[], int size)
{
    int min = INT_MAX;
    for(int i=0; i< size; i++)
    {
        if(arr[i]<min)
        {
            min= arr[i];
        }
    }
    return min;
}
int main()
{
    int array[5] ={1,2,3,4,5};
    int max =maxvalue(array, 5);
    cout<<"The maximum element of the array: "<<max<<endl;
    int min =minvalue(array,5);
    cout<<"The minimum element of the array: "<<min;
    
}