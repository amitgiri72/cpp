#include<iostream>
using namespace std;
struct mystack
{
    int *arr;
    int cap;
    int top;
    mystack(int c)
    {
        cap=c;
        arr=new int[cap];
        top=-1;
    }
    void push(int x)
    {
        if(top==cap-1)
        {
            cout<<"stack is full\n";
            return;
        }
        top++;
        arr[top]=x;
    }
    int  pop()
    {
        if(top==-1)
        return INT32_MIN;
        int res=arr[top];
        top--;
        return res;
    }
    int peek()
    {
        if(top==-1)
        return INT32_MIN;
        return arr[top];
    }
    int size()
    {
        return top+1;
    }
    bool isEmpty()
    {
        return(top==-1);

    }

};
int main()
{   
    mystack s(5);
    s.push(55);
    s.push(78);
    s.push(88);
    s.push(99);
    s.push(100);
    s.push(122);
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    s.push(998);
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    return 0;

}