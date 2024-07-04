#include<iostream>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Queue(int size)
    {
        this->size =size;
        arr = new int[size];
        front=-1;
        rear =-1;
    }
    ~Queue()
    {
        delete[] arr;
    }
    void enqueue(int data)
    {
        if(rear == size-1)
        {
            cout<<"Queue Overflow"<<endl;
            return;
        }
        rear++;
        arr[rear] = data;
        if(front==-1)
        {
            front++;
        }
    }

    void dequeue()
    {
        if(front == -1 || front>rear)
        {
            cout<<"Queue Underflow"<<endl;
        }
        front++;

    }
    void printQueue()
    {
        if(front==-1)
        {
            cout<<"Queue Empty"<<endl;
            return;
        }
        for(int i=front; i<=rear; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main()
{
    Queue qt(3);
    qt.enqueue(10);
    qt.enqueue(20);
    qt.enqueue(30);
    qt.printQueue();
    qt.dequeue();
    qt.printQueue();
}

//implementation of stack using linked list