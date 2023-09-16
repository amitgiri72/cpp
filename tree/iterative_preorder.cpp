#include<bits/stdc++.h>
using namespace std;
struct  Node
{
    int data;
    Node *left,*right;
};
Node *newNode(int data)
{
    Node *curr= new Node ;
    curr->data=data;
    curr->left=curr->right=NULL;
    // curr->right=NULL;
}
vector<int > preorder(Node *root)
{
    vector<int>pre;
    stack<Node*>st;
    st.push(root);
    while(!st.empty())
    {
        Node *node =st.top();
        st.pop();
        pre.push_back(node->data);
        if( node->right)
        st.push(node->right);
        if(node->left)
        st.push(node->left);
    }
    return pre;
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
    vector<int>pre=preorder(root);
    for(auto it:pre)
    {
        cout<<it<<" ";
    }
    return 0;
}