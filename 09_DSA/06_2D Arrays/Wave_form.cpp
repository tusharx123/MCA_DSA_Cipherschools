#include<iostream>
using namespace std;

void waveform1(int array[][3], int row , int col)
{
    for(int j=0; j<col; j++)
    {
        if(j%2==0)
        {
            for(int i=0; i<row;i++)
            {
                cout<<array[i][j]<<" ";
            }
            cout<<endl;
            
        }
        else{
            for(int i = row-1; i>=0; i--)
            {
                cout<<array[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

void waveform2(int array[][3], int row , int col)
{
    for(int i=0; i<row; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<col;j++)
            {
                cout<<array[i][j]<<" ";
            }
            cout<<endl;
            
        }
        else{
            for(int j = col-1; j>=0; j--)
            {
                cout<<array[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    int array[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=0; i<4;i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Elements after applying waveform function column wise: "<<endl;
    waveform1(array,4,3);
    cout<<"Elements after applying waveform function row wise: "<<endl;
    waveform2(array,4,3);


}