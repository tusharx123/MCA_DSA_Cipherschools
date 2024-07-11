#include <iostream>
#include <queue>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void printlevelOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    // Create a queue and push the root node
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size(); // Get the current level size
        for (int i = 0; i < levelSize; i++) {
            Node* temp = q.front();
            q.pop();
            cout << temp->data << " ";

            // Enqueue left child
            if (temp->left != NULL) {
                q.push(temp->left);
            }

            // Enqueue right child
            if (temp->right != NULL) {
                q.push(temp->right);
            }
        }
        cout << endl; // Move to the next level
    }
}

int countNodes(Node* root)
{
    if(root==NULL) 
    {
        return 0;
    }
    return countNodes(root->left)+countNodes(root->right)+1;
}
int Sum_of_Nodes(Node* root)
{
    if(root==NULL) 
    {
        return 0;
    }
    return Sum_of_Nodes(root->left)+Sum_of_Nodes(root->right)+ root->data;
}


int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);

    cout << "Level Order Traversal of binary tree:" << endl;
    printlevelOrder(root);
    int count = countNodes(root);
    cout<<"Count of nodes: "<<count<<endl;
    return 0;
}