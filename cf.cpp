#include<bits/stdc++.h>
using namespace std;
long long int factorial(long long int n)
{
    if(n==0 || n==1)
    return 1;
    long long int small=factorial(n-1);
    return n*small;
}
int main()
{
    int n,x;
    long long int sum=0;
    int ftx;
    cin>>n>>x;
    
    for(int i=0;i<n;i++)
    {  
        int a;
        cin>>a;
        if(n>=500000 or x >= 500000){
        cout<<"No\n";
        break;}
    
        sum=sum+factorial(a);

    }
    //  if(x >= 500000)
      
      for(int i=0;i<1;i++){
        if(x>=500000)
        break;
        
        if(sum% factorial(x)==0)
        cout<<"Yes\n";
        else
        cout<<"No\n";
     }
    
    return 0;
}
