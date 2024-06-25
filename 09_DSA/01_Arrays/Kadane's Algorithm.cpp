#include <iostream>
#include <climits> 

using namespace std;

// int largest_sum(int arr[], int size) {
//     int max_so_far = INT_MIN;
//     int max_ending_here = 0;

//     for (int i = 0; i < size; i++) {
//         max_ending_here = max_ending_here + arr[i];
//         if (max_so_far < max_ending_here) {
//             max_so_far = max_ending_here;
//         }
//         if (max_ending_here < 0) {
//             max_ending_here = 0;
//         }
//     }
//     return max_so_far;
// }

int kadane_algorithm(int array[], int size)
{
    int max = INT_MIN;
    int sum = 0;
    for(int i=0; i<size;i++)
    {
        sum+=array[i];
        if( sum > max )
        {
            max=sum;
        }
        if(sum< 0)
        {
            sum = 0;
        }
    }
    return max;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Array size should be greater than zero." << endl;
        return 1; 
    }

    int* array = new int[size]; 

    cout << "Enter the elements in the array: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int algorithm = kadane_algorithm(array, size);

    cout << "Maximum sum of the contiguous subarray (Kadane's Algorithm): " << algorithm << endl;

    delete[] array; 
    return 0; 
}
