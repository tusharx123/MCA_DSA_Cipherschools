#include<iostream>
using namespace std;

void printarr(int arr[], int size)
{
    cout<<"Elements in the array: "<<endl;

    for(int i=0; i<size; i++)
    {
        cout<< arr[i]<< " ";
    }
}
int main()
{
    int array[5];
    for(int i=0; i<5; i++)
    {
        cin>> array[i];
    }
    printarr(array, 5);

}