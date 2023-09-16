#include<bits/stdc++.h>
using namespace std;
struct Node
{
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
bool isLeaf(Node *root)
{
    return !root->left && !root->right;
}
void addleftboundry(Node *root,vector<int>&res)
{
    Node *curr=root->left;
    while(curr)
    {
        if(!isLeaf(curr))
        res.push_back(curr->data);
        if(curr->left) curr=curr->left;
        else curr=curr->right;
    }

}
void addleafes(Node *root,vector<int>&res)
{
    if(isLeaf(root)){
    res.push_back(root->data);
    return ;
    }
    if(root->left) addleafes(root->left,res);
    if(root->right) addleafes(root->right,res);
}
void addrightboundry(Node *root,vector<int>&res)
{
   Node *curr=root->right;
   vector<int>temp;
   while (curr)
   {
        if(!isLeaf(curr)) temp.push_back(curr->data);
        if(curr->right) curr=curr->right;
        else curr=curr->left;
   }
//    for reverse
   for(int i=temp.size()-1;i>=0;--i)
   {
    res.push_back(temp[i]);
   }
    
}
vector<int> printBoundary(Node *root)
{
    vector<int>res;
    if(root == NULL) return res;
    if(!isLeaf(root))
    res.push_back(root->data);
    addleftboundry(root ,res);
    addleafes(root,res);
    addrightboundry(root,res);
    return res;
}
int main()
{
    Node *root=newNode(1);
    root->left=newNode(2);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->left->left->left=newNode(6);
    root->left->left->right=newNode(7);
    root->left->left->left->right=newNode(8);
    root->left->left->left->right->left=newNode(9);
    root->left->left->left->right->right=newNode(10);
    root->right=newNode(3);
    root->right->right=newNode(11);
    root->right->right->left=newNode(12);
    root->right->right->left->left=newNode(14);
    root->right->right->left->right=newNode(13);

    vector<int>ans;
    ans=printBoundary(root);
    cout<<"boundry traversal is : ";
    for(int i=0;i<ans.size();i++ )
    {
        cout<<ans[i]<<" ";
    }
    return 0;

}