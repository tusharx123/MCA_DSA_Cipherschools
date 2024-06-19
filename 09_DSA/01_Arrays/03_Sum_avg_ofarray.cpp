#include <iostream>
using namespace std;
int main()
{
    int sum =0;
    float average;
    int arr[5]={1,2,3,4,5};
    for(int i=0; i<5; i++)
    {
        sum+= arr[i];
    }
    average = sum/5;
    cout<<"Sum of array is: "<< sum<<endl;
    cout<<"Average of the array is: "<<average;
}