#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* sortedArraytoBST(int arr[],int s, int e)
{
    if(s>e) return NULL;
    int mid = (s+e)/2;
    Node* root = new Node (arr[mid]);
    root->left = sortedArraytoBST(arr,s,mid-1);
    root->right = sortedArraytoBST(arr,mid+1,e);
    return root;
}
void preorder(Node* root)
{
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    
    
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    Node* root = sortedArraytoBST(arr,0,size-1);
    cout<<"Preorder traversal of tree: "<<endl;
    preorder(root);
}