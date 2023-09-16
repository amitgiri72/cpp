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
}

int depth_of_Tree(Node *root)
{
    if(root==NULL)
    return 0 ;
    int l=depth_of_Tree(root->left);
    int r=depth_of_Tree(root->right);
    return 1+max(l,r);

}

int main()
{
    Node *root=newNode(55);
    root->left=newNode(57);
    root->left->left=newNode(2);
    root->left->right=newNode(8);
    root->left->left->left=newNode(9);
    root->right=newNode(90);
    root->right->left=newNode(567);
    
    
    cout<<"maximum depth of the tree is : "<<depth_of_Tree(root);

    return 0;

}