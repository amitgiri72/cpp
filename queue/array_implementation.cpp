#include<bits/stdc++.h>
using namespace std;
struct Queue
{   
    int *arr;
    int front;
    int cap;
    int size;
    // int rear;
    Queue(int c)
    {
        arr=new int [c];
        cap=c;
        front =0;
        size =0;

    }
    bool isFull()
    {
        return (cap==size);
    }
    bool isEmpty()
    {
        return (size == 0);
    }
    int getFront()
    {
        if(isEmpty())
        return -1;
        else 
        return arr[front];
    }
    int getRear()
    {
        if(isEmpty())
        return -1;
        else
        return (front+size-1)%cap;

    }
    void enque(int x)
    {
        if(isFull())
        return;
        int rear=getRear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }
    int deque()
    {
        if(isEmpty())
        return INT_MIN;
        front = (front+1)%cap;
        size--;
        // return arr[front];
    }
    int sizee()
    {
        return size;
    }


};
int main()
{
    Queue q(5);
    q.enque(55);
    q.enque(70);
    cout<<q.sizee()<<endl;
    cout<<q.getFront()<<endl;
    cout<<q.deque()<<endl;
    cout<<q.getFront()<<endl;
    q.enque(99);
    cout<<q.isEmpty();
    return 0;

}