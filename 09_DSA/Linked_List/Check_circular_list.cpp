#include <iostream>
using namespace std;


class node{
    public:
    int  data;
    node*next;
    node(int data){
        this->data = data;
        this->next = nullptr;
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
bool iscircular(node *head)
{
    //empty list
    if (head == nullptr) {
        cout << "Linked List is empty" << endl;
        return false;
    }
    node* temp = head;
    while (temp->next != nullptr && temp->next != head) {
        temp = temp->next;
    }
    return (temp->next == head);


}

node* floydDetectLoop(node* head)
{
    if(head== nullptr)
    {
        return nullptr;
    }
    node* slow = head;
    node* fast = head;
    while(slow != nullptr && fast != nullptr)
    {
        slow = slow->next;
        if(fast->next != nullptr)
        {
        fast = fast->next->next;
        }
        if(slow==fast)
        {
            return slow;
        }
        

    }
    return nullptr;
    
}
node* getstartingnode (node* head)
{
    if(head==NULL) return NULL;
    node* intersection= floydDetectLoop(head);
    //Initialise slow at head
    // Move slow and intersection one step
    node *slow = head;
    while(slow!=intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    
    return slow;
    
}
void display(node*&head){
    if(head == nullptr){
        cout<<"Linked list is empty";
        return;
    }
    node*ptr = head;
    while(ptr->next!=nullptr){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
        if(ptr == head) break;
    }
    cout<<endl;
}
void removeLoop(node *head)
{
    if(head == NULL) return;
    node *startnodeofloop = getstartingnode(head);

    //create temp var, iterate it will the last node of the loop 
    // point the next of last node to NULL

    node* temp =startnodeofloop;
    while(temp->next != startnodeofloop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
int main()
{
    node* head = nullptr;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    
    display(head);
    
    if (iscircular(head)) {
        cout << "Linked List is circular" << endl;
    } else {
        cout << "Linked List is not circular" << endl;
    }
    
    node* loopNode = getstartingnode(head);
    if (loopNode) {
        cout << "Loop detected starting at node with data: " << loopNode->data << endl;
    } else {
        cout << "No loop detected" << endl;
    }
    
    return 0;
    removeLoop(head);
    display(head);
}
    
