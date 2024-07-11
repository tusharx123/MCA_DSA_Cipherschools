//Complete Binary tree is a tree in which every node is having 2 children except leaf nodes
//Max no of nodes at level L is 2^L.

#include<iostream>
#include<queue>
#include<stack>
using namespace std;


class node
{
    public:
    int data;
    node* left;
    node* right;
    public:
    node()
    {
    }
    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }

    static void preorder(node *root)
    {
        if(root == nullptr)
        {
            return;
        }
        else
        {
            cout<<root->data<<" ";
            preorder(root->left);
            preorder(root->right);
        }
    }

    static void inorder(node *root)
    {
        if(root == nullptr)
        {
            return;
        }
        else
        {
            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
        }
    }

    static void postorder(node *root)
    {
        if(root == nullptr)
        {
            return;
        }
        else
        {
            postorder(root->left);
            postorder(root->right);
            cout<<root->data<<" ";
        }
    }

};
int main()
{
    node* root = new node(50);
    root->left = new node(25);
    root->right = new node(75);
    root->left->left = new node(10);
    root->left->right = new node(30);
    cout<<"Preorder traversing: "<<endl;
    node::preorder(root);
    cout<<endl;
    cout<<"Inorder traversing: "<<endl;
    node::inorder(root);
    cout<<endl;
    cout<<"Postorder traversing: "<<endl;
    node::postorder(root);
   
}