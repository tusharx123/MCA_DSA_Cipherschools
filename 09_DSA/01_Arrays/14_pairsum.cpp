#include<iostream>
using namespace std;
bool pairsum(int arr[], int size, int sum)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(arr[i]+ arr[j]== sum)
            {
                
                return true;
            }

        }
    }
    return false;
}

//another method
bool target(int arr[], int size, int sum)
{
    int i=0;
    int j = size -1;
    
        while(i<=j)
        {
            if(arr[i]+arr[j] == sum)
        {
            return true;
        }
        
        else if(arr[i]+arr[j] > sum)
        {
            j--;
        }
        
        else {
            i++;
        }
        
        }
    
    return false;
}
int main()
{
    int array[7] = {2,2,1,1,4,5,1};
    if(target(array,7,120))
    {
        cout<<"Pair Sum exists";
    }
    else
    {
        cout<<"Pair Sum does not exists";
    }
    
}