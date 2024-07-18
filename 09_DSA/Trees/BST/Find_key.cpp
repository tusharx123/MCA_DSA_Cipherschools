#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data= value;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node* root,int val){
    if(root==NULL) return new Node(val);
    if(val<root->data) {
        root->left=insertBST(root->left,val);
    }else{
        root->right=insertBST(root->right,val);
    }
return root;
}

Node* is_key_present(Node* root, int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data == key)
    {
        return root;
    }
    if(key<root->data)
    {
        return is_key_present(root->left, key);
    }
    else
    {
        return is_key_present(root->right, key);
    }
}

int  min_element(Node* root)           //finding min element(left most element) in BST
{
    Node* temp = root;
    while(temp->left != NULL)
    {
        temp=temp->left;
    }
    return temp->data;
}

int  max_element(Node* root)            //finding max element(right most element) in BST
{
    Node* temp = root;
    while(temp->right != NULL)
    {
        temp=temp->right;
    }
    return temp->data;
}

Node* deletefromBST(Node* root, int value)
{
     if (root == NULL) {
        return root;
    }

    if (value < root->data) {
        root->left = deletefromBST(root->left, value);
    } else if (value > root->data) {
        root->right = deletefromBST(root->right, value);
    } else {
        // Node to be deleted found

        // 0 child
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        // 1 child
        if (root->left != NULL && root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        if (root->left == NULL && root->right != NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        // 2 children
        // either find max from the left subtree or min from the right subtree
        int minval = min_element(root->right);
        // replace the value
        root->data = minval;
        root->right = deletefromBST(root->right, minval);
    }
    return root;

        
}

int main()
{
    Node* root = NULL;
    root = insertBST(root , 5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    int key =10;
    Node* result  = is_key_present(root,key);
    if(result!=NULL)
    {
        cout<<key<<" is present in BST."<<endl;
    }
    else{
        cout<<key<<" is not present in BST."<<endl;
    }

    int min = min_element(root);
    int max = max_element(root);
    cout<<"Max element is: "<<max<<endl;
    cout<<"Min element is: "<<min<<endl;

    root = deletefromBST(root, 3);
    result = is_key_present(root, 3);
    if (result != NULL) {
        cout << "3 is still present in BST after deletion." << endl;
    } else {
        cout << "3 is not present in BST after deletion." << endl;
    }

    return 0;
}


