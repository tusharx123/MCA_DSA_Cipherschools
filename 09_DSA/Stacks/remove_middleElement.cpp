#include <iostream>
#include <stack>
using namespace std;

void remove_middle_element_util(stack<int>& st, int current, int middle) {
  
    if (current == middle) {
        st.pop();
        return;
    }

    
    int temp = st.top();
    st.pop();

    // Recursive call to remove the next element
    remove_middle_element_util(st, current + 1, middle);

    // Push the stored element back into the stack
    st.push(temp);
}

void remove_middle_element(stack<int>& st) {
    int size = st.size();
    if (size == 0) {
        cout << "Stack is empty" << endl;
        return;
    }

    int middle = size / 2;  // Calculate middle index
    remove_middle_element_util(st, 0, middle);
}

void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "Original stack: ";
    printStack(st);

    // Repopulate the stack since printStack empties it
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    remove_middle_element(st);

    cout << "Stack after removing middle element: ";
    printStack(st);

    return 0;
}
