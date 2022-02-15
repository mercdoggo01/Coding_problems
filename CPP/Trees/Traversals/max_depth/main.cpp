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

 int maxDepth(Node* root)
    {
        if(root==NULL) return 0;
        int lt = maxDepth(root->left);
        int rt = maxDepth(root->right);
        return 1+max(lt,rt);
    }




int main()
{
     // creating a root
    struct Node* root = new Node(1);
    // thereafter creating children
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    int ans = maxDepth(root);
    cout<< ans <<"\n";
    return 0;
}
