#include<iostream>
using namespace std;
int main()
{
    // creating 2D array
    int array[3][4];

    //taking user input row wise
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col<4; col++)
        {
            cin>> array[row][col];
        }
    }
    cout<<endl;
    for(int row =0; row< 3; row++)
    {
        for(int col =0; col <4; col++)
        {
            cout<<array[row][col]<<" ";
        }
        cout<<endl;

    }
    cout<< endl;

    // taking user input column wise

    for(int col =0;col<4; col++)
    {
        for(int row =0; row<3 ; col++)
        {
            cin>> array[row][col];
        }
    }
    cout<<endl;
    for(int col =0; col <4; col++)
    {
        for(int row =0; row<3; row++)
        {
            cout<<array[row][col]<<" ";
        }
        cout<<endl;
    }

    

}