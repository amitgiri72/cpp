#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left, *right;
};
Node *newNode (int data)
{
    Node *root=new Node;
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return root;
}
vector<vector<int>>zigzag(Node *root)
{
    vector<vector<int >>ans;
    if(root==NULL) return ans;
    queue<Node *>q;
    bool ltr=true;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        vector<int>a(size);
        for(int i=0;i<size;i++)
        {
        Node *curr=q.front();
        q.pop();
        int index=ltr ? i:size-1-i;
        a[index]=curr->data;
        if(curr->left)
        q.push(curr->left);
        if(curr->right)
        q.push(curr->right);
        }
        ltr=!ltr;
        ans.push_back(a);
    }
    return ans;
}

int main()
{
    Node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->right->left=newNode(4);
    root->right->right=newNode(5);
   vector<vector<int>>res= zigzag(root);
   for(int i=0;i<res.size();i++){
  
for(int j=0;j<res[i].size();j++)
      cout<<res[i][j] << " ";
       }
    return 0;
}