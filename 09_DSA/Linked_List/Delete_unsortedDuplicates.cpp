#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    
};
void insert_at_tail(node*&head,int data){
    node *ptr = new node(data);
    if(head == NULL){
        ptr->next = ptr;
        head = ptr;
        return;
    }
    node *temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    ptr->next = head;
    temp->next = ptr;
}

void remove_duplicates_unsorted(node *head)
{
    if(head == NULL || head->next == head)
    {
        return;
    }
    node* temp = head;
   

    while(temp != NULL && temp->next != head)
    {
        node* ptr = temp;
        while(ptr->next != head)
        {
            if(temp->data == ptr->next->data)
            {
                node* duplicate = ptr->next;
                ptr->next = ptr->next->next;
                delete duplicate;
            }
            else{
                ptr = ptr->next;
            }
        }
        temp = temp->next;
    }


}


void display(node*&head){
    if(head == NULL){
        cout<<"Linked list is empty";
        return;
    }
    node*ptr = head;
    do{
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    while(ptr!=head);
    cout<<endl;
}

int main()
{
    node *head = NULL;
    insert_at_tail(head, 3);
    insert_at_tail(head,3);
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    cout<<"Unsorted Linked List: "<<endl;
    cout<<"Linked List before removing duplicates: "<<endl;
    display(head);
    remove_duplicates_unsorted(head);
    cout<<"Linked List after removing duplicates: "<<endl;
    display(head);


}
