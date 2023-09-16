#include<iostream>
using namespace std;
int mymax(int x,int y)
{
    return(x>y)? x:y;
}
int mymax(int x,int y,int z)
{
    return mymax(mymax(x,y),z);
}
int main()
{
    int a,b,c;
    cout<<"enter a value";
    cin>>a>>b>>c;
    cout<<mymax(a,b)<<"\n";
    cout<<mymax(a,b,c);
    return 0;
}