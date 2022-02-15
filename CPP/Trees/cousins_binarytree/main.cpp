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

void depth_check(Node *root)
{
    if(root==NULL) return;

    int h=1;
    queue<Node*> q;
    q.push(root);
    unordered_map<int,pair<int,int>> mp;
    while(!q.empty())
    {
        int n = q.size();
        for(int i=0 ; i<n ; i++)
        {
            Node *node = q.front();
            q.pop();
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
            mp.insert(make_pair(node->val,make_pair()))
        }
    }

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

    int x,y;
    cin >> x >> y;

    return 0;
}
