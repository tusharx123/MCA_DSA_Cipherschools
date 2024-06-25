

#include<iostream>
using namespace std;

// void bubblesort(int array[], int size)
// {
//     for(int i=size - 1; i>= 0;i--)
//     {
//         for(int j= 0; j< i; j++)
//         {
//         if(array[j]>array[j+1])
//         {
//             swap(array[j], array[j+1]);
//         }
//         }

//     }
// }


#include<iostream>
using namespace std;

void bubblesort(int array[], int size)
{
    for(int i=size - 1; i>= 0;i--)
    {
        int hasswapped = 0;
        for(int j= 0; j< i-1; j++)
        {
        if(array[j]>array[j+1])
        {
            swap(array[j], array[j+1]);
            hasswapped =1;
        }
        }

        if(hasswapped == 0)
        {
            break;
        }
    }
    
}

int main()
{
    int size = 5;
    int array[size] = {10,37,5,4,1};
    cout<<"Elements before sorting: "<<endl;
    for(int i=0; i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    bubblesort(array,size);
    cout<<"Elements after sorting: "<<endl;
    for(int i=0; i<size;i++)
    {
        cout<<array[i]<<" ";
    }


    
}



int main()
{
    int size = 5;
    int array[size] = {10,37,5,4,1};
    cout<<"Elements before sorting: "<<endl;
    for(int i=0; i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    bubblesort(array,size);
    cout<<"Elements after sorting: "<<endl;
    for(int i=0; i<size;i++)
    {
        cout<<array[i]<<" ";
    }


    
}