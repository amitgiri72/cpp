#include<iostream>
using namespace std;
int isprime(int n)
{     
     for(int i=2;i<n;i++)
{
    if(n%i==0)
    return false;

}
    return true;

    
}
void primefactor(int n)
{
    int ans;
    for(int i=2;i<=n;i++)
    {
        if(isprime(i))
        {
            ans =i;
            while (n%ans==0)
            {
                cout<<i<<" ";
                ans=ans*i;
            }
            
        }
    }
}
int main()
{
    int num;
    cout<<"enter a value";
    cin>>num;
    primefactor(num);
    return 0;
}