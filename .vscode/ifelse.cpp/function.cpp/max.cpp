#include<iostream>
using namespace std;
int getmax(int ,int);
int main()
{
    int a,b;
    cout<<"enter a value";
    cin>>a>>b;
    cout<<getmax(a,b);
    return 0;
}int getmax(int x,int y)
{
    if(x>y)
    return x;
    else 
    return y;
}