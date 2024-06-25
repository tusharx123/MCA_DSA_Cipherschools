// upper bound of key is the index of the value in the array that is strictly greater than the key.
#include <iostream>
using namespace std;

int lowerbound(int array[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int result = size; // Initialize result to size, which means "not found" initially

    while (start <= end) {
        int mid = start + (end - start) / 2; // Correct calculation of mid

        if (array[mid] > key) {
            result = mid; // Update result to the current mid
            end = mid - 1; // Move left
        } else {
            start = mid + 1; // Move right
        }
    }
    return result;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];
    int key;

    cout << "Enter the elements in the array: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << "Enter the key: ";
    cin >> key;

    int result = lowerbound(array, size, key);

    if (result < size) {
        cout << "Lower bound of key: " << result << endl;
    } else {
        cout << "Key not found in the array" << endl;
    }

    return 0;
}
