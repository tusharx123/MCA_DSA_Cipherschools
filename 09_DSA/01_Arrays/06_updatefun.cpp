// value changed in the update function affects the value in the main function

#include<iostream>
using namespace std;

void updatearr(int arr[], int size)
{
    arr[0] = 10;
    cout<<"Entering the update function: "<<endl;

    for(int i=0; i<size; i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<<endl;
    cout<<"Exiting the update function: "<<endl;
}
int main()
{
    int array[5] ={1,2,3,4,5};

    updatearr(array, 5);

    for(int i =0; i<5; i++)
    {
        cout<<array[i]<<" ";
    }

}