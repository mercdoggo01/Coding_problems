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
    // base case
   if(root==NULL) return ans;
   stack<Node*> st;
   Node* node = root;
   while(true)
   {
      if(node!=NULL)
      {
          st.push(node);
          node =node->left;
      }
      else
     {
        if(st.empty()==true) break;
        node = st.top();
        st.pop();
        ans.push_back(node->data);
        node = node->right;
     }
   }
   return ans;
}
// TC: O(n)  SC: O(n)
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
}
