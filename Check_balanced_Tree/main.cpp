// Question: https://leetcode.com/problems/balanced-binary-tree/submissions/


#include <bits/stdc++.h>
using namespace std;


// Node structure creation
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

// Q.) what is balanced binary tree
// If the difference of heights of two subtrees is not more than 1 than it's said
// to be balanced





// recursive solution
int depth(Node *root)
{
    if(root==NULL) return 0;

    int lt = depth(root->left);
    int rt = depth(root->right);

    return 1+max(lt,rt);
}

bool isBalanced(Node* root)
{
    // if no root exist then it's balanced
     if(root==NULL) return true;

     // checking individual depth of each subtrees
     int lt =  depth(root->left);
     int rt = depth(root->right);

     // if at anytime the difference between both trees is > 1
     if(abs(lt-rt)>1) return false;

     // If recursively checking for both children nodes
     bool l = isBalanced(root->left);
     bool r = isBalanced(root->right);


     // if any of l or r gets a fail then return false
     if(!l || !r) return false;

     return true;
}
// TC: o(n^2) : will check height of tree O(n) and will check for n nodes O(n) hence
// o(n)*o(n) = o(n^2)


// recursive solution optimized: O(n)
int check(Node *root)
{
    if(root==NULL) return 0;

    int lt = check(root->left);
    int rt = check(root->right);

    if(lt==-1 || rt==-1) return -1;

    if(abs(lt-rt)>1) return -1;

    return 1+max(lt,rt);
}
// TC: o(n) SC: o(n)




int main()
{
    // creating a root
    struct Node* root = new Node(1);
    // thereafter creating children
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(3);
    root->left->left->left = new Node(4);
    root->left->left->right = new Node(4);
    // o(n^2) recursive
    (isBalanced(root)) ? cout<<"true\n" : cout<<"false\n";

    // o(n) recursive
    (check(root)!=-1)? cout<<"true\n" : cout<<"false\n";
    return 0;
}
