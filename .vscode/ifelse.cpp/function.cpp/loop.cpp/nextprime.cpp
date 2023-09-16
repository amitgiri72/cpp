#include<iostream>
using namespace std;
int nextprime(int n)
{
    for(int i=n+1;i<=n+9;i++)
    {   
        for(int j=2;j<n+1;j++)
        {
            if(i%j != 0)
            {
                return i;
            }
        }
    }
  }
int main()
{
    int a;
    cout<<"enter a number";
    cin>>a;
    cout<<nextprime(a);
    
    return 0;
}