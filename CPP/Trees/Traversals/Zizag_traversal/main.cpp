// Question: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

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
// same as levelorder
  vector<vector<int>> zigzag(Node* root, vector<vector<int>> &ans)
    {
        if(root==NULL) return ans;

        queue<Node*> q;
        q.push(root);
        // flag to do reversals
        bool lefttoright = true;
        while(!q.empty())
        {
            int n = q.size();
            vector<int> v(n);
            // all nodes of the level
            for(int i=0 ; i<n ; i++)
            {
                root = q.front();
                q.pop();
                // check if flag is true  take elements for vector v as it is
                // else take elements in reverse order
                int idx = (lefttoright) ? i : (n-i-1);

                v[idx] = root->data;
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);

            }
            // change the parity of flag
            lefttoright = !lefttoright;
            ans.push_back(v);
        }
        return ans;
    }
// TC: O(n) SC: O(n)


int main()
{
     // creating a root
    struct Node* root = new Node(3);
    // thereafter creating children
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    vector<vector<int>> ans;
    zigzag(root,ans);

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
