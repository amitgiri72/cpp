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
int count_node(Node*head)
{
    Node *curr=head;
    int count =0;

    // while(curr!=NULL) //both while loop are same
    while(curr) // means loop iterate till the curr not equal to null;
    {
        count++;
        curr=curr->next;
    }
    return count;
}
int main()
{
     Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(40);
    head->next->next->next=new Node(50);
    cout<<"nodes are : ";
    cout<<count_node(head);
    return 0;
}