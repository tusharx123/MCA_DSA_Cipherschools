#include<iostream>
using namespace std;

void sort(int arr[], int size)
{
    int count = 0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==0)
        {
            count+=1;
        }
    }
    for(int i =0; i<count; i++)
    {
        if(i<count)
        {
            arr[i] = 0;
        }
        else{
            arr[i]=1;
        }
    }
    
    
}
int main()
{
    int array[6] ={1,0,1,0,0,1};
    sort(array,6);
    for(int i=0;i<6;i++)
    {
        cout<<array[i]<<" ";
    }
}
