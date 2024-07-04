#include <iostream>
using namespace std;

template<class T>
class node{
    public:
    T data;
    node*next;
    node(int data){
        this->data = data;
    }
};
template<typename T>
void insert_at_tail(node<T>*&head,T data){
    node<T>*ptr = new node<T>(data);
    if(head == NULL){
        ptr->next = ptr;
        head = ptr;
        return;
    }
    node<T>*temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    ptr->next = head;
    temp->next = ptr;
}
template<typename T>
void insert_at_head(node<T>*&head,T data){
    node<T>*ptr = new node<T>(data);
    if(head == NULL){
        ptr->next = ptr;
        head = ptr;
        return;
    }
    node<T>*temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = head;
    head = ptr;
}
template<typename T>
void delete_at_head(node<T>*&head){
    if(head == NULL){
        return;
    }
    if(head->next == head){
        delete head;
        head = NULL;
        return;
    }
    node<T>* ptr = head;
    while (ptr->next!=head){
        ptr = ptr->next;
    }
    node<T>*temp = head;
    ptr->next = head->next;
    head = head->next;
    delete temp;        
}
template<typename T>
void delete_at_any(node<T>*&head,int position){
    if(position==1){
        delete_at_head(head);
        return;
    }
    node<T>*temp = head;
    int count = 1;
    while(count!=position-1){
        temp = temp->next;
        count++;
    } 
    node<T>* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
template<typename T>
void display(node<T>*&head){
    if(head == NULL){
        cout<<"Linked list is empty";
        return;
    }
    node<T>*ptr = head;
    while(ptr->next!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
        if(ptr == head) break;
    }
    cout<<endl;
}
int main() {
    node<int>*head = NULL;
    // insert_at_head(head,1);
    // insert_at_head(head,2);
    // insert_at_head(head,3);
    // insert_at_head(head,4);
    // insert_at_head(head,5);
    // display(head);
    insert_at_tail(head,0);
    display(head);
    delete_at_head(head);
    display(head);
    return 0;
}