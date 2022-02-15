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
// vector to store values of Nodes
vector<int> ans;
vector<int> preorder(Node* root)
{
   if(root==NULL) return ans;
   // store Nodes in a stack
   // stacks operate with principle of LIF0
   stack<Node*> st;
   // inserting root node
   st.push(root);
   while(!st.empty())
   {
       root = st.top();
       // removing root node & printing it's value
       st.pop();
       ans.push_back(root->data);
       // As stack operates in LIFO left node is pushed later so that it can be
       // on top
      if(root->right!=NULL) st.push(root->right);
      if(root->left!=NULL) st.push(root->left);
   }
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
    // calling the function
    preorder(root);
    // printing preorder
    for(auto it: ans)
    {
        cout<< it <<" ";
    }
    cout<<"\n";
    return 0;
}
