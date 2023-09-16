#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data =d;
        next=NULL;
    }
};
struct mystack
{
    Node *head;
    int sz;
    mystack()
    {
        head = NULL;
        sz=0;
    }
    void push(int x)
    {
        Node *temp=new Node (x);
        temp->next=head;
        head=temp;
        sz++;
    }
    int pop()
    {   if(head==NULL)
        return INT_MAX;
        int res=head->data;
        Node *temp=head;
         head=head->next;
        delete(temp);
        sz--;
        return res;
    }
    int peek()
    {  
        if(head==NULL)
        return INT_MAX;
        return (head->data);
    }
    int size()
    {
        return sz;
    }
    int isEmpty()
    {
        // if((head==NULL)
        // return true;
        // else return false; 
        return (head==NULL);
    }
};
int main()
{
    mystack s;
    s.push(66);
    s.push(99);
    s.push(899);
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty();
    return 0;

}
