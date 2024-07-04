#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl;
    cout<< st.empty()<<endl;
    cout<<st.size()<<endl;
     
    stack<int> st2;
    st2.push(100);
    st2.push(200);
    st2.push(300);
    st.swap(st2);
    cout<<st.top();
}