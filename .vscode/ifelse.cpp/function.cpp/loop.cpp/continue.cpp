#include <iostream>
using namespace std;
void multi(int n,int u)
{cout<<"not multiple of "<<u<<"is";
    for(int i=1;i<=n;i++)
    {
        if(i%u==0)
        continue;
        cout<<i<<" ";
    }
}int main()
{
    cout<<"enter a number";
    int n;
    cin>>n;
    cout<<"enter a value";
    int v;
    cin>>v;
    multi(n,v);
    return 0;
}