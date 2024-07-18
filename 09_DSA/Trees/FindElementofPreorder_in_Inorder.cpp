#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node() {}

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int start, int end, int curr)
{
    for(int i = start; i <= end; i++)
    {
        if(inorder[i] == curr)
        {
            return i;
        }
    }
    return -1; 
}

Node* build_Tree(int preorder[], int inorder[], int start, int end, int &i)
{
    if(start > end)
    {
        return NULL;
    }

    int curr = preorder[i++];
    Node* node = new Node(curr);

    if(start == end)
    {
        return node;
    }

    int pos = search(inorder, start, end, curr);
    node->left = build_Tree(preorder, inorder, start, pos - 1, i);
    node->right = build_Tree(preorder, inorder, pos + 1, end, i);

    return node;
}

void preorderTraversal(Node *root)
{
    if(root == nullptr)
    {
        return;
    }
    else
    {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void inorderTraversal(Node *root)
{
    if(root == nullptr)
    {
        return;
    }
    else
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main()
{
    int preorder[] = {1, 2, 4, 5, 3, 6, 7};
    int inorder[] = {4, 2, 5, 1, 6, 3, 7};
    int n = sizeof(preorder) / sizeof(preorder[0]);
    int i = 0;

    Node* root = build_Tree(preorder, inorder, 0, n - 1, i);

    cout << "Preorder traversal of the constructed tree: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Inorder traversal of the constructed tree: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
