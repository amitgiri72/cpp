#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"enter a number";
cin>>num;
if(num<0)
{
    cout<<num<<"is negative"<<"\n";
    if(num%2==0)
    cout<<"even";
    else
    cout<<"odd";
}
else if(num>0)
{
cout<<num<<"is positive"<<"\n";
if(num%2==0)
cout<<"even";
else
cout<<"odd";
}
else
cout<<num<<"is zero";
return 0;
}
