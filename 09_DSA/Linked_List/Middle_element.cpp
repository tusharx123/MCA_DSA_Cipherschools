#include<iostream>
using namespace std;

template <class T>
class node
{
    public:
    T data;
    node *next;
    node(T data){
        this->data = data;
        this->next = nullptr;
    }
    

};
template<typename T>
void insert_data_at_end(node<T>*&head, T data){
    node<T>*temp = new node<T>(data);
    if(head == nullptr){
        head = temp;
    }else{
        node<T>*ptr = head;
        while(ptr->next!=nullptr){
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
template <class T>
node<T> *middle_element(node<T> *head)
{
    if (head==NULL) return nullptr;

    node<T> *slow = head;
    node<T> *fast = head;

    while (fast != NULL && fast-> next != NULL)
    {
        slow = slow-> next;
        fast = fast->next->next;
    }
    return slow;


}
int main()
{
    node <int> *head = nullptr;
    insert_data_at_end(head, 1);
    insert_data_at_end(head, 2);
    insert_data_at_end(head, 3);
    insert_data_at_end(head, 4);
    
    node <int> *middle =middle_element(head);
    if (middle != nullptr)
    {
        cout << "Middle element is: " << middle->data << endl;
    }
    else
    {
        cout << "The list is empty." << endl;
    }

    return 0;
}


