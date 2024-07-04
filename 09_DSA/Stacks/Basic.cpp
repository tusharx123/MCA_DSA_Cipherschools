#include<iostream>
using namespace std;
class Stack
{
    public:
    int* arr;
    int top;
    int size;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    ~Stack()
    {
        delete[] arr;
    }
    void push(int data)
    {
        if(top == size-1)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = data;
    }
    void peek()
    {
        if(top>=0)
        {
            cout<<arr[top]<<endl;
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else{
            top--;
        }
    }
    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Stack st(3);
    st.push(10);
    st.push(20);
    st.push(30);
    st.peek();
    st.pop();
    st.peek();
    bool empty = st.isempty();
    if(empty)
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

}
