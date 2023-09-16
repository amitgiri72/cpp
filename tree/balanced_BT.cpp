#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left,*right;

};
Node *newNode(int data)
{
    Node *root=new Node;
    root->data=data;
    root->left =NULL;
    root->right=NULL;
    return root;

}
int height(Node *root)
{
    if(root==NULL) return 0;
    int lh=height(root->left);
    if(lh ==-1) return -1;
    int rh=height(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh >1)) return -1;
    return max(lh,rh)+1;  
}
bool isBalanced(Node *root)
{
    return (height(root) !=-1);
}
int main()
{
    Node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(4);
    root->right->left=newNode(8);
    root->right->left=newNode(67);
    cout<<isBalanced(root);
    return 0;
}