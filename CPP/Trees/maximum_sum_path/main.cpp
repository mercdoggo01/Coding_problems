// Question: https://leetcode.com/problems/binary-tree-maximum-path-sum/



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

int height(Node* root,int &maxx)
{
    if(!root) return 0;

    int lt = max(0,height(root->left,maxx));
    int rt = max(0,height(root->right,maxx));
    // for each Node checking sum of all it's left and right subtrees
    // and adding it's value to it inorder to find out max.
    maxx = max(maxx, lt+rt+root->data);
    return root->data+ max( lt , rt);

}

int maxPathSum(Node* root)
{
     int maxx = INT_MIN;
     height(root,maxx);
     return maxx;
}



int main()
{
    // creating a root
    struct Node* root = new Node(-10);
    // thereafter creating children
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    int ans = maxPathSum(root);
    cout<< ans <<"\n";

    return 0;
}
