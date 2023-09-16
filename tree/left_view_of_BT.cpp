#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left,*right;
};
Node *newNode(int data)
{
    Node *root=new Node ;
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return root;
}
void helper(Node *root,int level,vector<int>&res)
{
    if(root==NULL) return;
    if(res.size()==level)
    res.push_back(root->data);
    helper(root->left,level+1,res);
    helper(root->right,level+1,res);
}
vector<int>leftview(Node *root)
{
    // if(root==NULL) return NULL;
    vector<int>res;
    helper(root,0,res);
    return res;

}
int main()
{
    Node *root=newNode(89);
    root->left=newNode(68);
    root->left->left=newNode(54);
    root->left->right=newNode(67);
    root->left->left->left=newNode(45);
    root->right=newNode(78);
    root->right->right =newNode(70);

    vector<int>ans=leftview(root);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    return 0;
}
