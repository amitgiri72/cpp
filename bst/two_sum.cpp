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
void inorder(Node*root,vector<int> &v)
{
    if(root==NULL) 
    return ;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
    


}


bool findtarget(Node *root,int k)
{
    vector<int>v;
    inorder(root,v);
    int i=0;
    int j=v.size()-1;
    int sum=0;
    while(i<=j)
    {
         sum=v[i]+v[j];
         if(sum==k) return true;
         else{
            if(sum>k)  j--;
            else i++;
            sum=0;
         }
        
    }
     return false;
}
int main()
{
    Node *root=newNode(11);
    root->left=newNode(5);
    root->left->left=newNode(2);
    root->left->right=newNode(7);
    root->left->left=newNode(2);
    root->left->right->left=newNode(6);
    root->left->left->left=newNode(1);
    root->right=newNode(13);
    root->right->left=newNode(12);
    root->right->right=newNode(15);
    cout<<findtarget(root,30)<<"amit";
    return 0;
}
