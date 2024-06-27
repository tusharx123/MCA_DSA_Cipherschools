#include<iostream>
using namespace std;

bool iskeypresent(int array[][4], int key, int row, int col )
{
    for(int i=0; i< row; i++)
    {
        for(int j=0; j< col; j++)
        {
            if(array[i][j]== key)
            {
                return true;
            }

        }
    }
    return false;
}
int main()
{
   int array[3][4]={ 1,2,3,4,5,6,7,8,9,10,11,12};
    int key;
    cout<<"Enter the key to find: ";
    cin>>key;
    
    if(iskeypresent(array,key,3,4))
    {
        cout<<"Key is present";
    }
    else{
        cout<<"Key is not present";
    }

}