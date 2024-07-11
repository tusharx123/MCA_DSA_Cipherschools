#include<iostream>
#include <stack>
#include<queue>

using namespace std;

void reverse_queue_elements(queue<int> &q)
{
    stack<int>st;
    if(q.empty())
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        st.push(temp);

    }

    while(!st.empty())
    {
        int temp = st.top();
        st.pop();
        q.push(temp);
    }
}
void printQueue(queue<int>q)
{
    if(q.empty())
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main()
{
    queue<int>q ;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"Elements of queue before reversing: "<<endl;
    printQueue(q);
    reverse_queue_elements(q);
    cout<<"Elements of queue after reversing: "<<endl;
    printQueue(q);

    return 0;
}