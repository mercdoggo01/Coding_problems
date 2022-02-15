
// Question: https://leetcode.com/problems/binary-tree-level-order-traversal/
// Question: https://leetcode.com/problems/binary-tree-level-order-traversal-ii/submissions/
// Question: https://leetcode.com/problems/average-of-levels-in-binary-tree/submissions/
// Question: https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/

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

vector<vector<int>> ans;

vector<vector<int>> levelorder(Node *root)
{
    // if no root then return empty matrix
    if(root==NULL) return ans;

    // Queue to store nodes
    queue<Node*> q;
    // pushing the root
    q.push(root);
    while(!q.empty())
    {
        // running loop till size of queue and storing
        // all values in temporary vector
        int n = q.size();
        vector<int> level;
        for(int i=0 ; i<n ; i++)
        {
            Node *node = q.front();
            q.pop();
            // pushing left and right child to continue the process
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
            level.push_back(node->data);
        }
        // storing temporary vector to main matrix
        ans.push_back(level);
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
    root->left->right = new Node(7);
    root->right->right = new Node(5);
    root->right->left = new Node(6);

    levelorder(root);


    //shows nodes level wise
    for(auto it : ans)
    {
        for(auto it1 : it)
        {
            cout<< it1 <<" ";
        }
        cout<<"\n";
    }

    return 0;
}
