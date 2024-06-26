#include<iostream>
using namespace std;

void insertion_sort(int array[], int size)
{
    for(int i=0; i<size; i++)
    {
        int j= i;
    
    while(j < 0 && array[j-1] > array[j])
    {
        swap(array[j-1], array[j]);
        j--;
    }
    }
}
int main()
{
    int size = 5;
    int array[size] = {23,2,56,66,1};
    cout<<"Elements before sorting: "<<endl;
    for(int i=0; i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    insertion_sort(array,size);
    cout<<"Elements after sorting: "<<endl;
    for(int i=0; i<size;i++)
    {
        cout<<array[i]<<" ";
    }

}
