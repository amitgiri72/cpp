#include<iostream>
using namespace std;
inline int getmax(int a,int b)
{
    return(a>b)? a:b;
}
int main()\
{
    cout<<"enter a value";
    int d,f;
    cin>>d>>f;
    cout<<getmax(d,f);
    return 0;
}