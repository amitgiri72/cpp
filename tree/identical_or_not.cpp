#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left,*right;
};
Node * newNode(int data)
{
    Node  *root=new Node;
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return root;
}
 bool checkIdentical(Node *p,Node *q)
{
    if(p==NULL || q==NULL) 
    return p==q;
bool  l=    checkIdentical(p->left ,q->left) ;
 bool r=    checkIdentical(p->right,q->right);
    return (p->data==q->data) && l==r;
    //  && checkIdentical(p->left ,q->left) && checkIdentical(q->right,p->right);
}
int main()
{   
    Node *p=newNode(1);
    p->left=newNode(3);
    p->right=newNode(3);
    p->right->left=newNode(4);
    p->right->right=newNode(5);

    Node *q=newNode(1);
    q->left=newNode(3);
    q->right=newNode(3);
    q->right->left=newNode(4);
    q->right->right=newNode(5);

    cout<<checkIdentical(p,q);
    return 0;
}