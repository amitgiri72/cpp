#include<bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin>>n;
if(n<2)
cout<<"0";
long long  s=0,maxi=0;
for(int i=0;i<n;i++)
{
    long long a;
    long long  b;
    cin>>a>>b;

    if(i==0)
    {
        s=b;
    }
else if(i>0){
    s-=a;
    s+=b;
    maxi=max(maxi,s);}
}
    cout<<maxi;
    return 0;
}