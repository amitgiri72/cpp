#include<iostream>
using namespace std;
int firstdigit(int N)
{
    while(N>=10)
    
        N=N/10;
    
    return N;
    
}
int main()
{
    int a;
    cout<<"enter a value";
    cin>>a;
    cout<<firstdigit(a);
    
    return 0;
}