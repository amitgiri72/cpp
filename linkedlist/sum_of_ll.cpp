#include<bits/stdc++.h>
using namespace std;

struct Node
{   
    int data;
    Node*next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }

};
int sum_ll(Node *head)
{
    Node * curr=head;
    int sum =0;
    while(curr!=NULL)
    {
        sum=sum+(curr->data);
        curr=curr->next;
    }
    return sum;
}
int main()
{
     Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(40);
    head->next->next->next=new Node(50);
    cout<<"sum of linled list = :";
    cout<<sum_ll(head);
    return 0;
}
