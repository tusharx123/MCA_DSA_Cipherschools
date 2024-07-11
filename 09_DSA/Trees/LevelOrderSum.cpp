#include <iostream>
#include <queue>
#include<algorithm>
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

int LevelOrderSumAtLevel(node* root, int k) {
    if (root == nullptr) {
        cout << "Empty tree" << endl;
        return 0;
    }

    queue<node*> q;
    q.push(root);
    int currentLevel = 0;

    while (!q.empty()) {
        int levelSize = q.size();
        int levelSum = 0;

        for (int i = 0; i < levelSize; ++i) {
            node* current = q.front();
            q.pop();

            if (currentLevel == k) {
                levelSum += current->data;
            }

            if (current->left != nullptr) {
                q.push(current->left);
            }
            if (current->right != nullptr) {
                q.push(current->right);
            }
        }

        if (currentLevel == k) {
            return levelSum;
        }
        currentLevel++;
    }

    // If the desired level is greater than the height of the tree
    return 0;
}

int height_of_tree(node *root)       //calculates the height of the tree
{
    if(root == NULL)
    {
        return 0;
    }
    int left_height = height_of_tree(root->left);
    int right_height= height_of_tree(root->right);

    return max(left_height, right_height)+1;
}

int main() {
    node* root = new node(50);
    root->left = new node(25);
    root->right = new node(75);
    root->left->left = new node(10);
    root->left->right = new node(30);
    root->right->left = new node(60);
    root->right->right = new node(85);

    int k = 2;
    int sumAtK = LevelOrderSumAtLevel(root, k);
    cout << "Sum of nodes at level " << k << ": " << sumAtK << endl;

    int height = height_of_tree(root);
    cout<<"Height of Tree: "<<height<<endl;

    return 0;
}
