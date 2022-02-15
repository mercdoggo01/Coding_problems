#include <iostream>
using namespace std;

struct Node
{
 // node value
 int data;
 // pointer to left child
 struct Node *left;
 // pointer to right child
 struct Node *right;

 // constructor wherein a value is put to create a new node
 Node(int val)
 {
     data = val;
     left = right = NULL;
 }
};

void postorder(Node *root)
{
    if(root==NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout<< root->data <<"\n";
}


int main()
{
    // creating a root
    struct Node* root = new Node(1);
    // thereafter creating children
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);

    postorder(root);
    return 0;
}
