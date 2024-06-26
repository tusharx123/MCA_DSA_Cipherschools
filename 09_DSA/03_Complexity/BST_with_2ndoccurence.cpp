#include<iostream>
using namespace std;

int  last_occ(int array[], int size, int key)
{
    int start = 0;
    int end = size -1;
    int mid = (start+end)/2;
    int result;
    while(start<=end)
    {
    if(array[mid] == key)
    {
        result = mid;
        start = mid +1;
       
    }
    else if(array[mid]>key)
    {
        end = mid -1;
    }
    else{
        start = start +1; 
    }
    mid = (start+end)/2;
    }
    return result;
}

int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[size];
    int key;
    
    cout<<"Enter the elements in the array: ";
    
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the key to find the last occurence: ";
    cin>>key;
    int result = last_occ(array, size, key);
    cout<<"The last occurence of the key is present at "<< result <<" position";


}