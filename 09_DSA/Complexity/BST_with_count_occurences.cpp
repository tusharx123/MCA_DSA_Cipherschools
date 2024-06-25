#include<iostream>
using namespace std;
int  first_occ(int array[], int size, int key)
{
    int start = 0;
    int end = size -1;
    int mid = (start+end)/2;
    int occ1;
    while(start<=end)
    {
    if(array[mid] == key)
    {
        occ1 = mid;
        end = mid -1;
       
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
    return occ1;
}
int  last_occ(int array[], int size, int key)
{
    int start = 0;
    int end = size -1;
    int mid = (start+end)/2;
    int occ2;
    while(start<=end)
    {
    if(array[mid] == key)
    {
        occ2 = mid;
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
    return occ2;
}

int total_occurences(int array[], int size, int key)
{
    return (last_occ(array,size,key) - first_occ(array, size, key)) +1; 
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
    cout<<"Enter the key to find the total occurences: ";
    cin>>key;

    int total = total_occurences(array, size, key);
    cout<<"Total occurences of the key: "<<total;


}