#include <iostream>
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
void insert_data_at_end(node*&head, int  data){
    node*temp = new node(data);
    if(head == nullptr){
        head = temp;
    }else{
        node*ptr = head;
        while(ptr->next!=nullptr){
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

node* Kreverse(node *head, int k)
{
    node *prev= nullptr;
    node *curr= head;
    node *next = nullptr;
    int count=0;

    while(curr!= nullptr && count < k)
    {
        next = curr->next;
        curr-> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next != nullptr)
    {
        head->next= Kreverse(next,k);

    }
    return prev;
}
void printList(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    node *head = nullptr;
    insert_data_at_end(head, 1);
    insert_data_at_end(head,2);
    insert_data_at_end(head,3);
    insert_data_at_end(head,4);
    insert_data_at_end(head,5);

    int k=2;
    head = Kreverse(head,k);
    printList(head);


}

