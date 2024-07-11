#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Function to replace the value of each node with the sum of its subtree nodes
int replaceNode_with_SubtreeSum(node* root) {
    if (root == NULL) {
        return 0;
    }

    // Recursively replace left and right subtrees
    int leftSum = replaceNode_with_SubtreeSum(root->left);
    int rightSum = replaceNode_with_SubtreeSum(root->right);

    // Store the original node value
    int originalData = root->data;

    // Update the current node's value to the sum of its subtree nodes
    root->data = leftSum + rightSum;

    // Return the sum of the original node value and its subtree nodes
    return root->data + originalData;
}

// Function to print the tree in inorder traversal
void inorderTraversal(node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << "Inorder traversal before replacing with subtree sums: ";
    inorderTraversal(root);
    cout << endl;

    replaceNode_with_SubtreeSum(root);

    cout << "Inorder traversal after replacing with subtree sums: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
