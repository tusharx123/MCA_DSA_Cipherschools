#include<iostream>
using namespace std;


int  rowindex(int array[][4], int row, int col)
{
    int maxSum = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += array[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            rowIndex = i; 
        }
    }
    cout<<"Max sum is: "<<maxSum<<endl;
    return rowIndex;

}

int colindex(int array[][4], int row, int col)
{
    int maxSum = INT_MIN;
    int colIndex = -1;
    for (int j = 0; j < col; j++)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum += array[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            colIndex = j; 
        }
    }
    cout<<"Max sum is: "<<maxSum<<endl;
    return colIndex;
}


int main()
{
    int array[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int rowind = rowindex(array,3,4);
    cout<<"Index of element where rowsum is max: "<<rowind<<endl;
    int colind = colindex(array,3,4);
    cout<<"Index of element where colsum is max: "<<colind;
}
    