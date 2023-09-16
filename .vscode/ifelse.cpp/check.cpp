#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number";
    cin>>num;
    if(num<0)
    cout<<num<<" is negative";
    else if(num>0)
    cout<<num<<" is positive";
    else
    cout<<num<<" is zero";
}