#include<iostream>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void LeftView(Node* root)
{
    if(root == NULL)
        return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        int n = q.size();
        for(int i = 0; i < n; i++)
        {
            Node* curr = q.front();
            q.pop();

            // Print the first node of each level
            if(i == 0)
            {
                cout << curr->data << " ";
            }
            if(curr->left)
            {
                q.push(curr->left);
            }
            if(curr->right)
            {
                q.push(curr->right);
            }
        }
    }
}

int main()
{
   
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->right->right->right = new Node(7);

    cout << "Left view of the binary tree is: ";
    LeftView(root);
    cout << endl;
    return 0;
}
