#include<bits/stdc++.h>
using namespace std;
void st(stack <int>s)
{
while(s.empty()==false)
    {
        
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    stack<int>s;
    // cout<<"amit";
    for(int i=0;i<n;i++)
        {
            s.push(arr[i]);
        }

    st(s);
    return 0;
}