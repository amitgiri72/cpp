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
    root->left=NULL;
    root->right=NULL;
    return root;
}
int height(Node *root,int & diameter)
{
    if(root==NULL) return 0;
    int lh=height(root->left,diameter);
    int rh=height(root->right,diameter);
    diameter=max(lh+rh,diameter);
    return 1+max(lh,rh);
    }
int diameter_of_BT(Node *root)
{
    int diameter=0;
    height(root,diameter);
    return diameter;
}
int main()
{   
    Node *root=newNode(1);
    root->left=newNode(2);
    root->left->left=newNode(8);
    root->left->right=newNode(9);
    root->right=newNode(5);
    cout<<diameter_of_BT(root);
    return 0; 
    }