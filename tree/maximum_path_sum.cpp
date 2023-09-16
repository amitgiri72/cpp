#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

};
Node* newNode(int d)
{
    Node *curr=new Node;
    curr ->data=d;
    curr->left=NULL;
    curr->right=NULL;
    return curr;
}
int maxpath(Node *root,int &maxi)
{
    if(root ==NULL)
    {
        return 0;
    }
    int left=max(0,maxpath(root->left,maxi));
    int right=max(0,maxpath(root->right,maxi));
    maxi=max(maxi,root->data+left+right);
    return root->data+max(left,right);
}
int findmaxsum(Node *root)
{
    int maxi=INT_MIN;
    maxpath(root,maxi);
    return maxi;
}

int main()
{
    Node *root=newNode(-10);
    root->left=newNode(9);
    root->right=newNode(20);
    root->right->left=newNode(15);
    root->right->right=newNode(7);
    cout<<"maximum path sum : ";
    cout<<findmaxsum(root);
    return 0;
}