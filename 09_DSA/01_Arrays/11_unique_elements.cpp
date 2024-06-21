#include <iostream>
using namespace std;
void isunique(int arr[], int size)
{
    cout<<"Unique elements in the array: "<<endl;
    for(int i=0; i<size; i++)
    {
        bool unique = true;
        for(int j=0; j<size; j++)
        {
            if(i!= j && arr[i]==arr[j])
            {
                unique = false;
                break;
            }
            else{
                unique = true;
            }
            
        }
        if(unique)
        {
           
            cout<<arr[i]<<" ";
        }
    }
    
}
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[size];
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    isunique(array, size);

}