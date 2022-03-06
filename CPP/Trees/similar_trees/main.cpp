// https://leetcode.com/problems/same-tree/


#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;

    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left=right=NULL;
    }
};

bool isSameTree(Node* p, Node* q)
{
    // check for null node
  if(!p || !q)
  {
    return(p==q);
  }
  // recursive function to check if data of both are same and both children values also
  return (p->data==q->data && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
}
//TC: O(n)
int main()
{
    struct Node *p = new Node(1);
    p->left = new Node(2);
    p->right = new Node(3);

    struct Node *q = new Node(1);
    q->left = new Node(2);
    q->right = new Node(3);

    if(isSameTree(p,q))
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
    return 0;
}
