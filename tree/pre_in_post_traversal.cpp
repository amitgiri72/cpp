#include<bits/stdc++.h>
using namespace std;
 struct Node{
    int data;
    Node *left,*right;
 } ;
 Node *newNode(int data)
 {
    Node *root=new Node;
    root->data =data;
    root->left=root->right=NULL;
    return root;
 }
 void pre_in_post(Node *root,vector<int>&pre,vector<int>&in,vector<int>&post)
 {
    if(root==NULL)
    return ;
    stack<pair<Node*,int>>st;
    st.push({root,1});
    while(! st.empty())
    {
        auto it=st.top();
        st.pop();
        if(it.second==1)
        {
            pre.push_back(it.first->data);
            it.second++;

            st.push(it);
            if(it.first->left)
            st.push({it.first->left,1});
        }
        else if(it.second==2)
        {
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right)
            st.push({it.first->right,1});
        }
        else{
            post.push_back(it.first->data);
        }
    }

    
 }
int main()
{
    Node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(5);
    root->left->left=newNode(3);
    root->left->right=newNode(4);
    root->right->left=newNode(6);
    root->right->right=newNode(7);

    vector<int>pre,in,post;
    pre_in_post(root,pre,in,post);
    cout<<"preorder are : ";
    for(auto it:pre)
    {
        cout<<it<<" ";
    }
    cout<<"\ninorder are : ";
    for (auto it:in)
    {
        cout<<it<<" ";
    }
    cout<<"\npostorder are : ";
    for(auto it:post)
    {
        cout<<it<<" ";
    }
    return 0;
}