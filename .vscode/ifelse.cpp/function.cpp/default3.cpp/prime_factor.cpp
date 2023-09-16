#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. to get the prime factor\n";
    cin>>n;
    int ans;
    for(int i=2;i<n;i=(2*i+1))
    {
         ans =i;
        while(n % ans ==0)
        {
            cout<<i<<",";
            ans = (ans*i);
        }
      
    }
    return 0;
}