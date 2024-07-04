#include <iostream>
using namespace std;

template<class T>
class node{
    public:
    node* prev;
    T data;
    node* next;
    node(T data){
        prev = NULL;
        this->data = data;
        next = NULL;
    }
};
template<typename T>
void insert_at_head(node<T>*&head, T data){
    node<T>* ptr = new node<T>(data);
    if(head == NULL){
        head = ptr;
        return;
    }
    ptr->next = head;
    head->prev = ptr;
    head = ptr;
}
template<typename T>
void insert_at_end(node<T>*&head,T data){
    node<T>* ptr = new node<T>(data);
    if(head == NULL){
        head = ptr;
        return;
    }
    node<T>* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->prev = temp;
}
template<typename T>
void insert_at_any(node<T>*&head,T data,int pos){
    if(pos == 1){
        insert_at_head(head,data);
        return;
    }
    node<T>*ptr = new node<T>(data);
    node<T>*temp = head;
    int count = 1;
    while(count != pos-1){
        temp = temp->next;
        count++;
    }
    ptr->next = temp->next;
    temp->next->prev = ptr;
    temp->next = ptr;
    ptr->prev = temp;
}
template<typename T>
void delete_at_head(node<T>*&head){
    if(head == NULL) return;
    node<T>*ptr = head;
    head = head->next;
    ptr->next->prev = NULL;
    delete ptr;
}
template<typename T>
void delete_at_end(node<T>*&head){
    if(head == NULL) return;
    if(head->next == NULL){
        delete head;
        head = NULL;
    }
    node<T>*ptr = head;
    while(ptr->next->next!=NULL){
        ptr = ptr->next;
    }
    delete ptr->next;
    ptr->next = NULL;
}
template<typename T>
void display(node<T>*&head){
    node<T>*ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next; 
    }
    cout<<endl;
}
int main() {
    node<int>*head = NULL;
    insert_at_head(head,0);
    insert_at_head(head,1);
    insert_at_head(head,2);
    insert_at_head(head,3);
    insert_at_head(head,4);
    display(head);
    insert_at_end(head,1);
    display(head);
    insert_at_any(head,99,3);
    display(head);
    delete_at_head(head);
    display(head);
    delete_at_end(head);
    display(head);
    return 0;
}