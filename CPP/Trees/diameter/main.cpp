#include <bits/stdc++.h>
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
int ans=0;
int height(Node* root)
{
    if(!root) return 0;

    int lHeight = height(root->left);
    int rHeight = height(root->right);

    ans= max(ans,  lHeight + rHeight);
    return 1+ max( lHeight , rHeight);

}



int diameterOfBinaryTree(Node* root)
{
    if(!root) return 0;
    height(root);
    return ans;
}


int main()
{
    // creating a root
    struct Node* root = new Node(1);
    // thereafter creating children
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int x = diameterOfBinaryTree(root);

    cout<< x <<"\n";
    return 0;
}
