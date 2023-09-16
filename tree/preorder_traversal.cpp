#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
};
Node *newNode (int data)
{
    Node *curr=new Node;
    curr->data=data;
    curr->left=NULL;
    curr->right=NULL;
    return curr;
}
void preorder(Node *root,vector<int>&pre)
{
    if(root==NULL) return ;
    pre.push_back(root->data);
    preorder(root->left,pre);
    preorder(root->right,pre);
}
int main()
{
    Node *root=newNode(40);
    root->left=newNode(50);
    root->right=newNode(55);
    root->left->left=newNode(2);
    root->left->right=newNode(5);
    root->right->right=newNode(99);
    root->right->right->right=newNode(57);
    vector<int>pre;
    preorder(root,pre);
    for(auto it:pre)
    {
        cout<<it<<" ";
    }
    return 0;
}