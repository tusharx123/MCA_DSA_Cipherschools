#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>pq;
    pq.push(10);
    pq.push(80);
    pq.push(50);
    pq.push(40);
    pq.push(20);

    while(! pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}