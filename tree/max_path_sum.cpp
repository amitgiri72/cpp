#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
};
Node *newNode(int data)
{
    Node *curr=new Node;
    curr->data=data;
    curr->left=NULL;
    curr->right=NULL;
    return curr;
}
int maxpath(Node *root,int &maxi)
{
    if(root==NULL) return 0;
    int l=max(0,maxpath(root->left,maxi));
    int r=max(0,maxpath(root->right,maxi));

    maxi=max(l+r+root->data,maxi);
    return max(l,r)+root->data;
}
int max_path_sum(Node *root)
{   
    int maxi=0;
    maxpath(root,maxi);
    return maxi;
}

int main()
{
    Node *curr=newNode(-10);
    curr->left=newNode(9);
    curr->right=newNode(20);
    curr->right->left=newNode(15);
    curr->right->right=newNode(7);
    cout<<max_path_sum(curr);
    return 0;
}