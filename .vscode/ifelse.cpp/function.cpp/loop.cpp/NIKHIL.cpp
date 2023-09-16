#include<iostream>
using namespace std;
void binary(int n)
{
    if(n==0)
    return ;
    int a=n%2;
    n = n/2;
    cout<<a<<" ";
}
int main()
{
    int n;
    cout<<"Enter the number to print the binary\n";
    cin>>n;
    binary(n);
    return 0;
}