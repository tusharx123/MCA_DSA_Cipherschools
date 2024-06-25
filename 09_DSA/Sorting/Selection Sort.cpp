#include <iostream>
using namespace std;

void selection_sort(int array[], int size)
{
    int min ;
    for(int i=0; i<size-1; i++)
    {
        min = i;
        for(int j=i+1; j<size; j++)
        {
            if(array[j]<array[min])
            {
                min = j;
            }
            swap(array[i],array[min]);
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
    selection_sort(array,size);
    cout<<"Elements after sorting: "<<endl;
    for(int i=0; i<size;i++)
    {
        cout<<array[i]<<" ";
    }


}