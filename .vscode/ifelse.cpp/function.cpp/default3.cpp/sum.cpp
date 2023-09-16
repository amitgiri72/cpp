#include<iostream>
using namespace std;
int sum(int a,int b,int c=0,int d=0)
{
    return(a+b+c+d);
}
int main()
{
    
    cout<<sum(5,2)<<endl;
    cout<<sum(4,5,1);
    return 0;
}