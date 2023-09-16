#include<bits/stdc++.h>
using namespace std;
int stackMiddle(stack<int>s)
{
    // int arr[s.size()];
    int n=s.size();
    for(int i=0;i<n/2;i++)
    {
        // arr[i]=s.top();
        // cout<<"amit";
        s.pop();
    }
    // int res=n/2;
    // return arr[res];
    return s.top();
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<stackMiddle(s);
    return 0;


}