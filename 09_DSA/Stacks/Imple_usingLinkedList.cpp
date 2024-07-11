#include<iostream>
using namespace std;

class node
{   
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data = data;
        this->next = next;
    }
};

class Stack
{
    private:
    node* top;
    public:
    Stack()
    {
        top= NULL;
    }

    void push(int data)
    {

        node* newnode = new node(data);
        newnode->next =top;
        top = newnode;
        cout<<"Pushed "<<data<<" into the stack"<<endl;
        
    }

    void pop()
    {
        if(top == NULL)
        {
            cout<<"Stack is empty "<<endl;
            return;
        }

        int popvalue = top->data;
        node* temp;
        temp = top;
        top= temp->next;
        delete temp;
        cout<<"Popped "<<popvalue<<" from the stack"<<endl;
    }

    void peek()
    {
        if(top == NULL)
        {
            cout<<"Stack is empty "<<endl;
            return;
        }
        else
        {
            cout<<"Peek element of the stack is: "<<top->data<<endl;
        }
    }

    void printStack()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty "<<endl;
            return;
        }
        else
        {
            node* current = top;
            cout<<"Elements of the stack are: "<<endl;
            while(current != NULL)
            {
                cout<<current->data<<" ";
                current = current->next;
            }
            cout<<endl;
        }
    }
};

int main()
{
    node* head = NULL;
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.pop();
    st.peek();
    st.printStack();

}