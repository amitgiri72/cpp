#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
};
Node *newNode(int data)
{
    Node *root=new Node;
    root->data=data;
    root->left =NULL;
    root->right=NULL;
}
void postorder(Node *root,vector<int>&post)
{
    stack<Node *>s1,s2;
    s1.push(root);
    while(!s1.empty())
    {
        Node *curr=s1.top();
        s1.pop();
        
        if(curr->left)
        s1.push(curr->left);
        if(curr->right)
        s1.push(curr->right);
        s2.push(curr);
    }
    while(!s2.empty())
    {  
        Node *node=s2.top();
        s2.pop();
        post.push_back(node->data);
    }
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
    vector<int>post;
    postorder(root,post);
    for(auto it:post)
    {
        cout<<it<<" ";
    }
    return 0;
}
