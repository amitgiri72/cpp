#include<iostream>
using namespace std;
void table(int n)
{  for(int b=1;b<=n;b++)
    {
    for(int i=1;i<=10;i++)
    {
        cout<<(i*b)<<" ";
    }
    cout<<"\n";
    }
}
int main()
{
    cout<<"enter a number";
    int a;
    cin>>a;
    table(a);
    return 0;
}