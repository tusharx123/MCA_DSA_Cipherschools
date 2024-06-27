#include<iostream>
using namespace std;

void spiralPrint(int arr[][3], int row, int col)
{
    int toprow = 0;
    int bottomrow = row-1;
    int leftcol=0;
    int rightcol = col-1;

    while(toprow <= bottomrow && leftcol <= rightcol)
    {
        //prints top row
        for(int i=leftcol; i<= rightcol; i++ )
        {
            cout<<arr[toprow][i] <<" ";
        }
        toprow++;

        //prints right col
        for(int i=toprow; i<=bottomrow; i++)
        {
            cout<<arr[i][rightcol]<<" ";
        }
        rightcol--;

        //prints bottom row
        for(int i= rightcol; i>= leftcol; i--)
        {
            cout<<arr[bottomrow][i]<<" ";
        }
        bottomrow--;

        //prints left column
        for(int i=bottomrow; i>=toprow; i--)
        {
            cout<<arr[i][leftcol]<<" ";
        }
        leftcol++;
    }
}
int main()
{
    int array[][3] = {1,2,3,4,5,6,7,8,9};
    spiralPrint(array,3,3);

}
