// Question:  https://leetcode.com/problems/minimum-depth-of-binary-tree/

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

int h=0;
 int minDepth(Node* root)
    {
        if(root == NULL) return 0;

        int flag=1;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            ++h;
            int n = q.size();
            for(int i=0 ; i<n ; i++)
            {
                Node *node = q.front();
                q.pop();
                if(node->left!=NULL)
                {
                    q.push(node->left);
                }

                if(node->right!=NULL)
                {
                    q.push(node->right);
                }

                if(node->left==NULL && node->right==NULL)
                {
                    flag=0;
                    break;
                }
            }
            if(!flag)
            {break;}
        }
        return h;
    }


int main()
{
    // creating a root
    struct Node* root = new Node(1);
    // thereafter creating children
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
     minDepth(root);
     cout<< h <<"\n";

    return 0;
}
