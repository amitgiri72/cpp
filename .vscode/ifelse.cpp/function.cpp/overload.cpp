#include<iostream>
using namespace std;
void print(string a)
{
    cout<<a<<endl;

}
void print(int b)
{
    cout<<b<<endl;
}
void print(char c)
{
    cout<<c<<endl;
}
int main()
{
    cout<<"enter a value";
    int t;string u;
    char v;
    cin>>t>>u>>v;
     print(t);
     print(v);
     print(u);
}