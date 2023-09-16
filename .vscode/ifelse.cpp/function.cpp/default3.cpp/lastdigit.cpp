#include<iostream>
using namespace std;
int lastdigit(int n)
{
    return(n=n%10);
}
int main()
{
    int a;
    cout<<"enter a value";
    cin>>a;
    cout<<lastdigit(a);
    return 0;
}