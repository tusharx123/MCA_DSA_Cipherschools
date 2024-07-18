#include<iostream>
using namespace std;     //Heap is a complete binary tree that comes with a heap order property.
// Max Heap: 1. tree should be CBT 2. value of Parent node must be greater than child nodes(applicable for whole tree.)
// Min heap: 1. tree should be CBt 2. value of Parent node must be less than child nodes(applicable for whole tree.)
/*To find left child or right child:
for 1 based indexing: ith left child = 2*i ; ith right child: 2*i+1;
for 0 based indexing: ith left child = 2*i+1 ; ith right child: 2*i+2;
To find parent of ith node: i/2  (1 Based indexing)
To find parent of ith node: i-1/2 (0 Based indexing) */

// insert: insert at end, take to the correct position.
//deletion: replace last with root, remove last and take root to correct position.
// Point: In a heap, from (n/2)+1 index to nth index, every node is a leaf node.
#include<iostream>
using namespace std;

class Heap {
public:
    int arr[100];
    int size;

    Heap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void deletefromheap() {
        if (size == 0) {
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i <= size) {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;
            int largest = i;

            if (leftindex <= size && arr[largest] < arr[leftindex]) {
                largest = leftindex;
            }
            if (rightindex <= size && arr[largest] < arr[rightindex]) {
                largest = rightindex;
            }
            if (largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            } else {
                return;
            }
        }
    }

    void heapify(int arr[], int n, int i) {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= n && arr[largest] < arr[left]) {
            largest = left;
        }
        if (right <= n && arr[largest] < arr[right]) {
            largest = right;
        }
        if (largest != i) {
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }

    void heapsort(int arr[], int n) {
        for (int i = n / 2; i > 0; i--) {
            heapify(arr, n, i);
        }
        int size = n;
        while (size > 1) {
            swap(arr[size], arr[1]);
            size--;
            heapify(arr, size, 1);
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Heap h;
    int arr[6] = { -1, 54, 53, 55, 52, 50 };
    int n = 5;

    h.heapsort(arr, n);
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
