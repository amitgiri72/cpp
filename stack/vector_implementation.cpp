#include<bits/stdc++.h>
using namespace std;
struct mystack
{
    vector<int>v;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int res=v.back();
        v.pop_back();
        return res;

    }
    int size()
    {
        return v.size();
    }
    bool isEmpty()
    {
        if(v.empty()==true)
        return true;
        else return false;
    }
    int peek()
    {
        return v.back();
    }
};
int main()
{
    mystack s;
    s.push(77);
    s.push(99);
    s.push(79);
    s.push(770);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    s.push(78);
    s.push(88);
    cout<<s.size()<<endl;
    cout<<s.isEmpty();
    return 0;

}
