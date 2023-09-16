#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node * left,*right;
};
Node *newNode (int data)

{
    Node *root=new Node;
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return root;
}
vector<int >inorder(Node *root)
{
    vector<int>in;
    stack<Node*>st;
    
    // Node *curr=root;
    while(true)
    {
        if(root){
        st.push(root);
        root=root->left;}
        else {
            if(st.empty()){break;}
            
                root=st.top();
                st.pop();
                in.push_back(root->data);
                root=root->right;
            
        }
    }
    return in;
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
    vector<int>in=inorder(root);
    for(auto it:in)
    {
        cout<<it<<" ";
    }
    return 0;
}